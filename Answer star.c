//5�࿡ ���ļ� ����� �̷������, ���� ������ ������ o������ ���� �����Ѵٴ� Ư¡�� ������� while ���� ��ø���� �����ϸ� �ȴ�.

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int i = 0, j = 0;
	while (i < 5)
	{
		while (j<1)
		{
			printf("o ");
			j++;
		}
		j = 0;
		printf("* \n");
		i++;
	}

	return 0;
}