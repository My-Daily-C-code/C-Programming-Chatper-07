// ���ϱ׷� ����ڷκ��� ����ؼ� ������ �Է� �޴´�. �׸��� �� ���� ����ؼ� ���� ������. �̷��� �۾��� ���α׷� ����ڰ� 0�� �Է��� ������ ��� �Ǿ�� �ϸ�, 0�� �Է� �Ǹ� 
// ��� ������ ���� ��� �ϰ� ���α׷��� ���� ��Ų��.
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num = 1;
	int total = 0;

	while (num != 0) // ���߿� ������ �غ� ��
	{
		printf("insert a number: ");
		scanf_s("%d", &num);
		total +=num;
	}

	

	printf("The result is %d\n", total);

	return 0;
}