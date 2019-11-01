#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{

	int total = 0, num = 0;

	do
	{
		printf("insert a number :  ");
		scanf_s("%d", &num);
		total += num;
	} while (num != 0);
	printf("result : %d\n", total);
	
	return 0;
}