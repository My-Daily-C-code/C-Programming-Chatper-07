#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
//���α׷� ����ڷκ��� �Է� ���� ������ ����� ����ϴ� ���α׷��� �ۼ� 
//���� 1: ���� ��� ������ �Է� �� ������ ���α׷� ����ڿ��� ���´�. �׸��� �� ����ŭ ������ �Է� �޴´�
//���� 2: �Է� ���� ������ ����� ���Ѵ�. ����� �Ҽ��� ���� ���� ���.
int main()
{
	int total = 0;
	int num;
	int i = 0;
	int input;
	printf("Please insert a mount of your number : ");
	scanf_s("%d", &num);

	while (i++ < num)
	{
		printf("insert a number : ");
		scanf_s("%d", &input);
		total += input;
	}

	printf("The avg of your input %f", (double)total/num);

	return 0;
}