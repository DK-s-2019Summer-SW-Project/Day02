#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS



// ����ڷκ��� ������ �޾Ƽ� Ȧ�� ���� ¦�� ������ ����ϴ� ���α׷��� �ۼ�
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