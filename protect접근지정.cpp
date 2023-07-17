//#include <stdio.h>
//#include <string.h>
//
//class Human //휴먼이라는 클래스를 만든다. 
//{
//protected: //protected 접근 지정자
//	char name[12];
//	int age;
//
//public:
//	Human(const char* aname, int aage) { // name과 age를 받겠다는 뜻 
//		strcpy_s(name, aname); // stracpy는 문자열을 복사할때 사용하고 _s를 추가한건
//		//오버플로우 등의 문제를 방지해 주기 위함
//		age = aage;
//	}
//	void intro() // intro함수 선언
//	{
//		printf("이름 = %s, 나이=%d\n", name, age); //intro함수 실행 시 입력된 name과
//		//age 출력
//	}
//};
//
//class Student : public Human //Student라는 클래스를 Human이 상속 받는다.
//{
//
//protected:
//	int stunum; //protected 접근지정자 
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum; // 여기서 생성자의 이름(Student)는 클래스의 이름(Student)
//		//와 동일해야 한다. Student가 받은 매개변수 aname, aage, astunum은 Human의
//		//매개변수에 의해 초기화 된다. astunum = stunum
//	}
//	void study() { // study 함수 제작 
//		printf("이이는사,이삼은육,이사팔"); //출력물
//	}
//	void report() { //리포트 함수 제작
//		printf("이름: %s, 학번:%d 보고서 제출합니다.\n", name, stunum);
//	}//출력물
//};
//int main()
//{
//	Student han("김한결", 15, 123456);
//	han.intro();  //출력결과 이름:김한결 나이=15
//	han.study();  //이이는사,이삼은육,이사팔
//	han.report(); //이름: %s(김한결), 학번:%d(123456) 보고서 제출합니다.\n", name, stunum
//}
////protected는 상속 지정자의 의미를 최소로 만든다. prvate로 접근지정자를 설정 시
////void report 부분의 name에는 오류가 뜰 수 밖에 없다.