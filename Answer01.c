//���α׷� ����ڷκ��� ���� ������ �ϳ� �޾Ƽ�, �� ����ŭ "Hello world"�� ��� �ϴ� ���α׷�
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int i = 0; // ��ŭ ���� �� �������� ���� Ƚ���� ���� �ϴ� ���̴�. --> 0��°������ ����
	int num; // �������� ������ �Է� �޴´�.
	printf("Please insert a diget : ");
	scanf_s("%d", &num);

	while (i<num)
	{
		printf("Hello world!\n");
		i++;// ��ŭ ���� �� ������ Ƚ���� ������Ű�鼭 num���ٴ� �۰� �����Ͽ� ��ǥ�ϴ� ���α׷��� ����
	}

	return 0;
}