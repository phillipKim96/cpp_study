//#include <stdio.h>
//#include <string.h>
//
//class Human //�޸��̶�� Ŭ������ �����. 
//{
//protected: //protected ���� ������
//	char name[12];
//	int age;
//
//public:
//	Human(const char* aname, int aage) { // name�� age�� �ްڴٴ� �� 
//		strcpy_s(name, aname); // stracpy�� ���ڿ��� �����Ҷ� ����ϰ� _s�� �߰��Ѱ�
//		//�����÷ο� ���� ������ ������ �ֱ� ����
//		age = aage;
//	}
//	void intro() // intro�Լ� ����
//	{
//		printf("�̸� = %s, ����=%d\n", name, age); //intro�Լ� ���� �� �Էµ� name��
//		//age ���
//	}
//};
//
//class Student : public Human //Student��� Ŭ������ Human�� ��� �޴´�.
//{
//
//protected:
//	int stunum; //protected ���������� 
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
//		stunum = astunum; // ���⼭ �������� �̸�(Student)�� Ŭ������ �̸�(Student)
//		//�� �����ؾ� �Ѵ�. Student�� ���� �Ű����� aname, aage, astunum�� Human��
//		//�Ű������� ���� �ʱ�ȭ �ȴ�. astunum = stunum
//	}
//	void study() { // study �Լ� ���� 
//		printf("���̴»�,�̻�����,�̻���"); //��¹�
//	}
//	void report() { //����Ʈ �Լ� ����
//		printf("�̸�: %s, �й�:%d ���� �����մϴ�.\n", name, stunum);
//	}//��¹�
//};
//int main()
//{
//	Student han("���Ѱ�", 15, 123456);
//	han.intro();  //��°�� �̸�:���Ѱ� ����=15
//	han.study();  //���̴»�,�̻�����,�̻���
//	han.report(); //�̸�: %s(���Ѱ�), �й�:%d(123456) ���� �����մϴ�.\n", name, stunum
//}
////protected�� ��� �������� �ǹ̸� �ּҷ� �����. prvate�� ���������ڸ� ���� ��
////void report �κ��� name���� ������ �� �� �ۿ� ����.