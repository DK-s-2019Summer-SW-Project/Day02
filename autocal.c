// 자동 계산 프로그램
#include<stdio.h>
#define _CAR_SECURE_NO_WARNNINGS

int main()
{
	
	int money, price, change;
	int result1, result2, result3, result4, result5;
	printf("insert a money :");
	scanf_s("%d", &money);
	printf("Price is: ");
	scanf_s("%d", &price);
	change = money - price;

	int won10000 = change / 10000;
	change %10000;
	result1 = change % 10000;
	int won5000 = result1 / 5000;
	result1 %5000;
	result2 = result1 % 5000;
	int won1000 = result2/ 1000;
	result2 %1000;
	result3 = result2 % 1000;
	int won500 = result3 / 500;
	result3 % 500;
	result4 = result3 % 500;
	int won100 = result4 / 100;
	result4 % 100;
	result5 = result4 % 100;
	int won10 = result5 / 10;
	result5 % 10;

	printf("the change is %d\n", change);
	printf("10000won : %d\n", won10000);
	printf("5000won : %d\n", won5000);
	printf("1000won : %d\n", won1000);
	printf("500won : %d\n", won500);
	printf("100won : %d\n", won100);
	printf("10won: %d\n", won10);
	
	return 0;
}