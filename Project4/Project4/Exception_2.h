//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//
//	try {
//		printf("나누어질 수를 입력하시오 : ");
//		scanf_s("%d", &a);
//		if (a < 0) throw a; // 음수일 때 예외 발생
//		printf("나누는 수를 입력하시오 : ");
//		scanf_s("%d", &b);
//		if (b == 0) throw "0으로는 나눌 수 없습니다."; // 0으로 나눌 때 예외 발생
//		printf("나누기 결과는 %d입니다.\n", a / b); // 나누기 연산 수행
//	}
//	catch (int a) { // int 타입의 예외를 받아 처리
//		printf("%d는 음수이므로 나누기 거부\n", a); // 음수 예외 처리
//	}
//	catch (const char* message) { // const char* 타입의 예외를 받아 처리
//		puts(message); // 문자열 예외 처리
//	}
//}
