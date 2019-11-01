// 절대 평가로 학생들의 점수를 계산
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	/*int a, b;
	
	printf("insert a number to cpmapre : ");
	scanf_s("%d %d", &a, &b);

	if (a < b)
	{
		printf("%d is big", b);
	}
	if (a > b)
	{
		printf("%d is big", a);
	}
	else
	{
		printf("the number is same");
	}
	return 0;*/

	int a, b, c;
	printf("Insert an number to compare : ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a >= b && a >= c)
	{
		printf("The %d is the Biggest\n", a);
	}

	else if (b >= c && b >= a)
	{
		printf("the %d is the Biggest\n", b);
	}
	else if (c >= a && c >= b)
	{
		printf("the %d is the biggest\n", c);
	}
	else
	{
		printf("the numebrs are the same\n");
	}
	return 0;
}