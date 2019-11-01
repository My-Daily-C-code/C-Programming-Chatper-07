//프로그램 사용자로부터 양의 정수를 하나 받아서, 그 수만큼 "Hello world"를 출력 하는 프로그램
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