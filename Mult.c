#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{

	int i=0;
	int num;

	printf("Please inset number : ");
	scanf_s("%d", &num);

	while (i < num)
	{
		printf("%d * %d = %d\n", num, i, num*i);
		i++;

	}
	return 0;
}