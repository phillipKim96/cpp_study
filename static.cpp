//#include <stdio.h>
//
//class Simple
//{
//private:
//	int value;
//	static int count; //static이 들어가면 클래스와 상관 없는 아이/Ex db연결 한 번 해야하는 상확
//
//public:
//	Simple() { count++; }
//	~Simple() { count--; }
//	static void InitCount() {
//		count = 0;
//	}
//	static void OutCount() {
//		printf("현재 객체 개수 = %d\n", count);
//	}
//};
//int Simple::count;
//
//int main()
//{
//	Simple::InitCount();		// 카운트 0 simple떄문에 계속 초기화가 아닌 공유되고 있는 것
//	Simple::OutCount();			//
//	Simple s, * ps;				// 카운트 1
//	Simple::OutCount();
//	ps = new Simple;			// 카운트 2
//	Simple::OutCount();
//	delete ps;					// 카운트 1
//	Simple::OutCount();
//	printf("크기 = %d\n", sizeof(s));
//}								// 카운트 0
//
//
//
//
//#include <stdio.h>
//
//class MathCalc
//{
//private:
//	static const double pie; //상수는 변하지 않는 값 & static을 해놓으면 어디서나
//	//상수를 쓸 수 있으니까 둘은 가장 많이 사용되는 콤보 / 
//
//public:
//	MathCalc() { } 
//	void DoCalc(double r) {
//		printf("반지름 %.2f인 원의 둘레 = %.2f\n", r, r * 2 * pie);
//	}
//};
//const double MathCalc::pie = 3.1416; //상수초기화
//
//int main()
//{
//	MathCalc m;
//	m.DoCalc(5);
//}
//
//#include <stdio.h>
//
//class Simple
//{
//private:
//	int value;
//	static int count;
//
//public:
//	Simple() { count++; }
//	~Simple() { count--; } //~표시가 있으면 소멸자 
//	void OutCount() {
//		printf("현재 객체 개수 = %d\n", count);
//	}
//};
//int Simple::count = 0;
//
//int main()
//{
//	Simple s, * ps;
//	s.OutCount();
//	ps = new Simple;
//	ps->OutCount();
//	delete ps;
//	s.OutCount();
//	printf("크기 = %d\n", sizeof(s));
//}
//
//
//#include <stdio.h>
//
//class Time
//{
//private:
//    int hour, min, sec;
//
//public:
//    // 기본 생성자
//    Time() { }
//
//    // 매개변수를 받는 생성자
//    Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//
//    // 시간 출력 함수
//    void OutTime() {
//        printf("%d:%d:%d\n", hour, min, sec);
//    }
//
//    // 시간을 더하는 함수
//    const Time AddTime(const Time& other) const {
//        Time t;
//        t.sec = sec + other.sec;    // 초 더하기
//        t.min = min + other.min;    // 분 더하기
//        t.hour = hour + other.hour; // 시 더하기
//
//        t.min += t.sec / 60;        // 초를 분으로 변환
//        t.sec %= 60;                // 초 계산 후 나머지 저장
//        t.hour += t.min / 60;       // 분을 시로 변환
//        t.min %= 60;                // 분 계산 후 나머지 저장
//
//        return t;
//    }
//};
//
//int main()
//{
//    Time t1(1, 10, 30); // 시간 01:10:30
//    Time t2(2, 20, 40); // 시간 02:20:40
//    Time t3;
//
//    t3 = t1.AddTime(t2); // t1과 t2를 더한 결과를 t3에 저장
//    t3.OutTime();        // t3 출력 (03:31:10)
//}
//
//
//#include <stdio.h>
//
//class Time
//{
//private:
//    int hour, min, sec;
//
//public:
//    // 기본 생성자
//    Time() { }
//
//    // 매개변수를 받는 생성자
//    Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//
//    // 시간 출력 함수
//    void OutTime() {
//        printf("%d:%d:%d\n", hour, min, sec);
//    }
//
//    // 덧셈 연산자 오버로딩
//    const Time operator +(const Time& other) const {
//        Time t;
//        t.sec = sec + other.sec;    // 초 더하기
//        t.min = min + other.min;    // 분 더하기
//        t.hour = hour + other.hour; // 시 더하기
//
//        t.min += t.sec / 60;        // 초를 분으로 변환
//        t.sec %= 60;                // 초 계산 후 나머지 저장
//        t.hour += t.min / 60;       // 분을 시로 변환
//        t.min %= 60;                // 분 계산 후 나머지 저장
//
//        return t;
//    }
//};
//
//int main()
//{
//    Time t1(1, 10, 30); // 시간 01:10:30
//    Time t2(2, 20, 40); // 시간 02:20:40
//    Time t3;
//
//    t3 = t1 + t2; // t1과 t2를 더한 결과를 t3에 저장 (연산자 오버로딩)
//    t3.OutTime(); // t3 출력 (03:31:10)
//}
//
