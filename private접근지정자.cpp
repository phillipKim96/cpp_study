//#include <stdio.h>
//#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <cstring>
//
//class Human //휴먼 클래스 제작
//{
//
//private: //접근지정자를 private로 설정
//	char name[14];
//	int age;
//
//public:
//	Human(const char* aname, int aage) {
//		strcpy_s(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("이름 =%s, 나이=%d\n", name, age);
//	}
//};
//
//class Student : public Human
//{
//
//private:
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum; //private지만 클래스 내에서는 접근 가능함
//	}
//	void study() {
//		printf("아이는 사,이삼은 육, 이사팔\n");
//	}
//};
//
//int main()
//{
//	Human kim("김상현", 29);
//	kim.intro();
//	Student june("오야스", 15, 1231); // 마지막 숫자열은 studentnumber
//	june.intro();
//	june.study();
//
//}