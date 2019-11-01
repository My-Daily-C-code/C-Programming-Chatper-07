#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num=0, total = 0;
	int i = 0;

	while (i < 5)
	{
		while (num<=0)
		{
			printf("insert a number : ");
			scanf_s("%d", &num);
		}
		total += num;
		num = 0;
		i++;
	}
	printf("The avg is %d", total);
	return 0;

}