//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//
//	try {
//		printf("�������� ���� �Է��Ͻÿ� : ");
//		scanf_s("%d", &a);
//		if (a < 0) throw a; // ������ �� ���� �߻�
//		printf("������ ���� �Է��Ͻÿ� : ");
//		scanf_s("%d", &b);
//		if (b == 0) throw "0���δ� ���� �� �����ϴ�."; // 0���� ���� �� ���� �߻�
//		printf("������ ����� %d�Դϴ�.\n", a / b); // ������ ���� ����
//	}
//	catch (int a) { // int Ÿ���� ���ܸ� �޾� ó��
//		printf("%d�� �����̹Ƿ� ������ �ź�\n", a); // ���� ���� ó��
//	}
//	catch (const char* message) { // const char* Ÿ���� ���ܸ� �޾� ó��
//		puts(message); // ���ڿ� ���� ó��
//	}
//}
