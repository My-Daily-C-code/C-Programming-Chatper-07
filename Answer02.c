//���α׷� ����ڷ� ���� ���� ������ �ϳ� �Է� ���� ���� �� ����ŭ 3�� ����� ��� �ϴ� ���α׷��� �ۼ�
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int i;
	int j = 1;// �ݺ��ϴ� Ƚ���� ���� ���� 0-- > 0���� ���ϰ� ���� �ʱ⿡ ������ 1�� �ߴ�.
	printf("Please insert a nuber : ");
	scanf_s("%d", &i);

	while (j <= i)
	{
		printf("%d\n", 3 * j);// �ܼ��ϴ�. ���� �ϴ� ��ŭ 3�� �����ָ� �ȴ�
		j++;
	}


	return 0;
}