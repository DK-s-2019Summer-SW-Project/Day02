// �⵵�� 4�� ������ ��������, 100���δ� �������� �ʴ� ��
// �⵵�� 400���� ������ �������� ��
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int a;
	printf("Insert a year");
	scanf_s("%d", &a);

	if ((a % 4 == 0 && a % 100!=0) || a % 400 == 0)
	{
		printf("It is ����\n");
	}

	else
	{
		printf("It is not a ����\n");
	}
	return 0;
}