#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int a, b, c, d;
	double total;
	
	printf("Insert a score\n");
	printf("math: \n");
	scanf_s("%d", &a);
	printf("Language: \n");
	scanf_s("%d", &b);
	printf("science: \n");
	scanf_s("%d", &c);
	printf("Attitude: \n");
	scanf_s("%d", &d);
	total = (a + b + c + d) / 4;

	if (80 <= total)
	{
		printf("A\n");
	}
	else
		printf("B\n");

	return 0;
}