//���α׷� ����ڷ� ���� ���� ������ �ϳ� �Է� ���� ���� �� ����ŭ 3�� ����� ��� �ϴ� ���α׷��� �ۼ�
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int i = 1, num;
	printf("Please insert a number: ");
	scanf_s("%d", &num);

	while (i <= num)
	{
		printf("%d\n", i * 3);
		i++;
	}

	return 0;
}