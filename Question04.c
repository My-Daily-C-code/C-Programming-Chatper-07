//���α׷� ����ڷκ��� �Է� ���� ���ڿ� �ش��ϴ� �������� ��� �ϵ� �������� ��� �Ͻÿ�
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int i = 10;
	int num;
	printf("Please insert a number : ");
	scanf_s("%d", &num);
	
	while (0<i)
	{
		printf("%d\n", num*i);
		i--;
	}

	return 0;
}

