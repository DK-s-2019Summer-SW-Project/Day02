#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int a, b;
	printf("insert your pay: ");
	scanf_s("%d", &a);
	b = a - 1000;
	if (b <=1000)
	{
		printf("The tax is %f원\n",a*0.08);
	}
	else if (b<4000 && b>1000)
	{
		printf("The tax form your pay %f원\n", 0.17*b+80);
	}
	else if (b < 8000 && b>4000)
	{
		printf("The tax form your pay %f원\n", 0.26*b + 80);
	}
	else if (b > 8000)
	{
		printf("The tax from your pay is %f원\n", 0.35*b + 80);
	}


	return 0;
}