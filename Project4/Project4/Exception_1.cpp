//#include <stdio.h>
//
//enum E_Error { OUTOFMEMORY, OVERRANGE, HARDFULL};
//void report() throw(E_Error)
//{
//	if (true/*���ܹ߻�*/) throw OUTOFMEMORY; // ���� �߻� �� OVERRANGE �߻� ��Ű�� throw
//
//}
//
//int main()
//{
//	try 
//	{
//		report(); // report �Լ� ȣ��, ���� ó�� �õ�
//		puts("�۾��� �Ϸ��߽��ϴ�."); // ���� �߻����� �ʾ��� �� ���
//	}
//	catch (E_Error e) { // 
//		switch (e) { // ���� ������ ���� �޽��� ���
//		case OUTOFMEMORY:
//			puts("�޸𸮰� �����մϴ�.");
//			break;
//		case OVERRANGE:
//			puts("���� ������ �ʰ��߽��ϴ�.");
//			break;
//		case HARDFULL:
//			puts("�ϵ� ��ũ�� ���� á���ϴ�.");
//			break;
//		}
//	}
//}