// while���� ��ø
// ���α׷� ����ڷκ��� �� 5���� ������ �Է� �޾Ƽ� �� ���� ���� ����ϴ� ���α׷� �ۼ�. �� ������ ������ 1�̻� ���� 1�̸��� ���� �Է½� �� �Է� �䱸, 
// �ᱹ 1 �̻��� 5���� ������ �Է� �޾Ƽ� �� ���� ��� �ϴ� ��

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int input, num, total = 0;
	int a, b, c, d, e;

	printf("Please insert Five number : \n");
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);

	while (a < 1)
	{
		printf("Wrong number insert the number that is higher than 0 : ");
		scanf_s("%d", &a);
	}

	while (b < 1)
	{
		printf("Wrong number insert the number that is higher than 0 : ");
		scanf_s("%d", &b);
	}

	while (c < 1)
	{
		printf("Wrong number insert the number that is higher than 0 : ");
		scanf_s("%d", &c);
	}

	while (d < 1)
	{
		printf("Wrong number insert the number that is higher than 0 : ");
		scanf_s("%d", &d);

	}

	while (e < 1)
	{
		printf("Wrong number insert the number that is higher than 0 : ");
		scanf_s("%d", &e);
	}


	total = a + b + c + d + e;
	printf("The average of your number is %f", (double)total / 5);
	

	return 0;
}