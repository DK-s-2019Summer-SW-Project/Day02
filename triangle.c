// �ﰢ���� ���̸� �Է� �޾� � �ﰢ������ �Ǻ��ϴ� ���α׷�
// && �����ڿ� ||  �������� ��� �뵵�� ����� �ľ�����
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int a, b, c;

	printf("insert a length of the triangle: ");
	scanf_s("%d %d %d", &a, &b, &c);

	// a == b / a == c / b == c / a == b == c
	
	
		if (a == b && a ==c && b == c)
		{
			printf("���ﰢ��\n");
		}
		
		else if (a == b || b == c  || a == c)
		{
			printf("�̵ �ﰢ��\n");
		}
		else
		{
			printf("�Ϲ� �ﰢ��\n");
		}
		
	
	return 0;
}