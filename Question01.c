//���α׷� ����ڷκ��� ���� ������ �ϳ� �޾Ƽ�, �� ����ŭ "Hello world"�� ��� �ϴ� ���α׷�
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int i = 0, num;

	printf("Insert a number for a Hello world : ");
	scanf_s("%d", &num);

	while (i < num)
	{
		printf("Hello world\n");
		i++;
	}

	return 0;
}