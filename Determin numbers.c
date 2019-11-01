#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
int main()
{
	int a;

	printf("Insert a number: ");
	scanf_s("%d", &a);

	if (a > 0)
	{
		printf("The number is True");
	}
	if (a <= 0)
	{
		printf("Wrong number for the statement please insert the number again ");
	}

	return 0;
}