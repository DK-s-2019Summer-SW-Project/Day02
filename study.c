#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int a, b;
	double total;
	printf("Please insert a number : ");
	scanf_s("%d %d", &a, &b);
	total = (a*b) / 2;
	printf("≥–¿Ã : %lf", total);
	return 0;
}