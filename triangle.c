// 삼각형의 길이를 입력 받아 어떤 삼각형인지 판별하는 프로그램
// && 연산자와 ||  연산자의 뜻과 용도를 제대로 파악하자
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int a, b, c;

	printf("insert a length of the triangle: ");
	scanf_s("%d %d %d", &a, &b, &c);

	// a == b / a == c / b == c / a == b == c
	
	
		if (a == b && a ==c && b == c)
		{
			printf("정삼각형\n");
		}
		
		else if (a == b || b == c  || a == c)
		{
			printf("이등변 삼각형\n");
		}
		else
		{
			printf("일반 삼각형\n");
		}
		
	
	return 0;
}