#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
// ���α׷� ����ڷ� ���� �Է� ���� ���ڿ� �ش��ϴ� �������� ��� �ϵ�, �������� ��� �ϴ� ���α׷��� �ۼ�
int main()
{
	int i = 10;
	int num;

	printf("Please insert a number : ");
	scanf_s("%d", &num);

	while (i>0)
	{
		printf("%d\n", num*i);
		i--;
	}


	return 0;
}
