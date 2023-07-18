//#include <stdio.h>
//
//enum E_Error { OUTOFMEMORY, OVERRANGE, HARDFULL};
//void report() throw(E_Error)
//{
//	if (true/*예외발생*/) throw OUTOFMEMORY; // 예외 발생 시 OVERRANGE 발생 시키는 throw
//
//}
//
//int main()
//{
//	try 
//	{
//		report(); // report 함수 호출, 예외 처리 시도
//		puts("작업을 완료했습니다."); // 예외 발생하지 않았을 시 출력
//	}
//	catch (E_Error e) { // 
//		switch (e) { // 예외 유형에 따라 메시지 출력
//		case OUTOFMEMORY:
//			puts("메모리가 부족합니다.");
//			break;
//		case OVERRANGE:
//			puts("연산 범위를 초과했습니다.");
//			break;
//		case HARDFULL:
//			puts("하드 디스크가 가득 찼습니다.");
//			break;
//		}
//	}
//}