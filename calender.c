// 년도를 4로 나누어 떨어지고, 100으로는 떨어지지 않는 수
// 년도를 400으로 나누어 떨어지는 수
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int a;
	printf("Insert a year");
	scanf_s("%d", &a);

	if ((a % 4 == 0 && a % 100!=0) || a % 400 == 0)
	{
		printf("It is 유년\n");
	}

	else
	{
		printf("It is not a 윤년\n");
	}
	return 0;
}