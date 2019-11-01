#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS



// 사용자로부터 정수를 받아서 홀수 인지 짝수 인지를 출력하는 프로그램을 작성
int main()
{
	int a;
	printf("insert a number: ");
	scanf_s("%d", &a);

	if( a%2 == 0)
	{
		printf("The number is even\n");
	}
	else if (a % 2 == !0)
	{
		printf("The number is odd\n");
	}

	return 0;
}

int main()
{
	int input_data();
	
	input_data = getchar();

}