// 편의점에 가서 물건을 사고 지불한 돈을 입력 받아, 거스름 돈을 계산하는 프로그램
// a = 만원 , b = 오천원 , c = 천원 , d = 오백원
// 50000을 입력 받았을 때 거스름 돈을 어떻게 지급해야 하는 지 출력 하시오
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int a, b, c, d;
	a = 10000;
	b = 5000;
	c = 1000;
	d = 500;

	printf("the change is\n%d원 3개\n%d원 0개\n%d원 4개\n%d원 1개\n",a,b,c,d);


	return 0;
}