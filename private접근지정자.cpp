//#include <stdio.h>
//#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <cstring>
//
//class Human //�޸� Ŭ���� ����
//{
//
//private: //���������ڸ� private�� ����
//	char name[14];
//	int age;
//
//public:
//	Human(const char* aname, int aage) {
//		strcpy_s(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("�̸� =%s, ����=%d\n", name, age);
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
//		stunum = astunum; //private���� Ŭ���� �������� ���� ������
//	}
//	void study() {
//		printf("���̴� ��,�̻��� ��, �̻���\n");
//	}
//};
//
//int main()
//{
//	Human kim("�����", 29);
//	kim.intro();
//	Student june("���߽�", 15, 1231); // ������ ���ڿ��� studentnumber
//	june.intro();
//	june.study();
//
//}