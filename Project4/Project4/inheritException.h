#include <stdio.h>
#include <iostream>


// 사용자 정의 예외 클래스 ExNegative 선언
class ExNegative
{
protected:
	int number; // 예외 객체가 저장할 정수형 멤버 변수

public:
	// 생성자로 정수를 받아 초기화하는 멤버 이니셜라이저 사용
	ExNegative(int n) : number(n) { }

	// 가상 함수 PrintError 선언
	virtual void PrintError() {
		printf("%d는 음수이므로 잘못된 값입니다.\n", number);
	}
};

// ExNegative 클래스를 상속하는 ExTooBig 클래스 선언
class ExTooBig : public ExNegative
{
public:
	// 생성자로 정수를 받아 ExNegative 클래스의 생성자 호출하여 초기화
	ExTooBig(int n) : ExNegative(n) { }

	// 가상 함수 PrintError 재정의
	virtual void PrintError() {
		printf("%d는 너무 큽니다. 100보다 작아야 합니다.\n", number);
	}
};

// ExTooBig 클래스를 상속하는 ExOdd 클래스 선언
class ExOdd : public ExTooBig
{
public:
	// 생성자로 정수를 받아 ExTooBig 클래스의 생성자 호출하여 초기화
	ExOdd(int n) : ExTooBig(n) { }

	// 가상 함수 PrintError 재정의
	virtual void PrintError() {
		printf("%d는 홀수입니다. 짝수여야 합니다.\n", number);
	}
};

// main 함수
int main()
{
	int n;

	for (;;) {
		try {
			printf("숫자를 입력하세요(끝낼 때 0) : ");
			scanf_s("%d", &n);

			// 입력된 정수에 따라 예외를 발생시키거나, 출력합니다.
			if (n == 0) break; // 입력이 0이면 반복문 종료
			if (n < 0) throw ExNegative(n); // 음수이면 ExNegative 예외 발생
			if (n > 100) throw ExTooBig(n); // 100보다 크면 ExTooBig 예외 발생
			if (n % 2 != 0) throw ExOdd(n); // 홀수이면 ExOdd 예외 발생

			printf("%d 숫자는 규칙에 맞는 숫자입니다.\n", n);
		}
		catch (ExNegative& e) { // ExNegative 예외를 잡아서 처리합니다.
			e.PrintError(); // 예외 처리를 위해 해당 객체의 PrintError 함수 호출
		}
	}
}
