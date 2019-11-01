#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int a, b, avg;
	
	printf("Insert a grade\n");
	printf("mid: ");
	scanf_s("%d",&a);
	printf("final: ");
	scanf_s("%d", &b);
	avg = (a+b) / 2;

	if (avg >= 90)
	{
		printf("The grade is A\n");
	}
	else if (avg >= 80)
	{
		printf("The grade is B\n");
	}
	else if (avg >= 70)
	{
		printf("The grade is c\n");
	}
	else if (avg>=60)
	{
		printf("The grade is d\n");
	}
	else
	{
		printf("The grade is f\n");
	}
	

	return 0;
}