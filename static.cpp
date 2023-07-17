//#include <stdio.h>
//
//class Simple
//{
//private:
//	int value;
//	static int count; //static�� ���� Ŭ������ ��� ���� ����/Ex db���� �� �� �ؾ��ϴ� ��Ȯ
//
//public:
//	Simple() { count++; }
//	~Simple() { count--; }
//	static void InitCount() {
//		count = 0;
//	}
//	static void OutCount() {
//		printf("���� ��ü ���� = %d\n", count);
//	}
//};
//int Simple::count;
//
//int main()
//{
//	Simple::InitCount();		// ī��Ʈ 0 simple������ ��� �ʱ�ȭ�� �ƴ� �����ǰ� �ִ� ��
//	Simple::OutCount();			//
//	Simple s, * ps;				// ī��Ʈ 1
//	Simple::OutCount();
//	ps = new Simple;			// ī��Ʈ 2
//	Simple::OutCount();
//	delete ps;					// ī��Ʈ 1
//	Simple::OutCount();
//	printf("ũ�� = %d\n", sizeof(s));
//}								// ī��Ʈ 0
//
//
//
//
//#include <stdio.h>
//
//class MathCalc
//{
//private:
//	static const double pie; //����� ������ �ʴ� �� & static�� �س����� ��𼭳�
//	//����� �� �� �����ϱ� ���� ���� ���� ���Ǵ� �޺� / 
//
//public:
//	MathCalc() { } 
//	void DoCalc(double r) {
//		printf("������ %.2f�� ���� �ѷ� = %.2f\n", r, r * 2 * pie);
//	}
//};
//const double MathCalc::pie = 3.1416; //����ʱ�ȭ
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
//	~Simple() { count--; } //~ǥ�ð� ������ �Ҹ��� 
//	void OutCount() {
//		printf("���� ��ü ���� = %d\n", count);
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
//	printf("ũ�� = %d\n", sizeof(s));
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
//    // �⺻ ������
//    Time() { }
//
//    // �Ű������� �޴� ������
//    Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//
//    // �ð� ��� �Լ�
//    void OutTime() {
//        printf("%d:%d:%d\n", hour, min, sec);
//    }
//
//    // �ð��� ���ϴ� �Լ�
//    const Time AddTime(const Time& other) const {
//        Time t;
//        t.sec = sec + other.sec;    // �� ���ϱ�
//        t.min = min + other.min;    // �� ���ϱ�
//        t.hour = hour + other.hour; // �� ���ϱ�
//
//        t.min += t.sec / 60;        // �ʸ� ������ ��ȯ
//        t.sec %= 60;                // �� ��� �� ������ ����
//        t.hour += t.min / 60;       // ���� �÷� ��ȯ
//        t.min %= 60;                // �� ��� �� ������ ����
//
//        return t;
//    }
//};
//
//int main()
//{
//    Time t1(1, 10, 30); // �ð� 01:10:30
//    Time t2(2, 20, 40); // �ð� 02:20:40
//    Time t3;
//
//    t3 = t1.AddTime(t2); // t1�� t2�� ���� ����� t3�� ����
//    t3.OutTime();        // t3 ��� (03:31:10)
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
//    // �⺻ ������
//    Time() { }
//
//    // �Ű������� �޴� ������
//    Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//
//    // �ð� ��� �Լ�
//    void OutTime() {
//        printf("%d:%d:%d\n", hour, min, sec);
//    }
//
//    // ���� ������ �����ε�
//    const Time operator +(const Time& other) const {
//        Time t;
//        t.sec = sec + other.sec;    // �� ���ϱ�
//        t.min = min + other.min;    // �� ���ϱ�
//        t.hour = hour + other.hour; // �� ���ϱ�
//
//        t.min += t.sec / 60;        // �ʸ� ������ ��ȯ
//        t.sec %= 60;                // �� ��� �� ������ ����
//        t.hour += t.min / 60;       // ���� �÷� ��ȯ
//        t.min %= 60;                // �� ��� �� ������ ����
//
//        return t;
//    }
//};
//
//int main()
//{
//    Time t1(1, 10, 30); // �ð� 01:10:30
//    Time t2(2, 20, 40); // �ð� 02:20:40
//    Time t3;
//
//    t3 = t1 + t2; // t1�� t2�� ���� ����� t3�� ���� (������ �����ε�)
//    t3.OutTime(); // t3 ��� (03:31:10)
//}
//
