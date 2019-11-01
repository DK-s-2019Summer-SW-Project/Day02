#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int a;
	printf("insert a yeard: ");
	scanf_s("%d", &a);
	printf("The converted in to feet is %lfcm\n", (double)a*3.048);
	printf("The converted in to a inch is : %lfcm\n", (double)a*2.54);

	return 0;
}
//int main()
//{
//	double f, y, i;
//	double a;
//	f = 30.48;//30.48cm
//	y = 3;//3ft
//	i = 2.54;//2.545cm
//	char ch;
//	printf("Insert a length that you want to convert: (y = yeard , f = feet , i - inch)");
//	scanf_s("%c", &ch);
//	printf("insert a length: ");
//	scanf_s("%d", &a);
//	
//	if (ch == y)
//	{
//		printf("The converted length of yard %finch %fft",a*i,a*y );
//	}
//
//
//
//
//	return 0;
//}