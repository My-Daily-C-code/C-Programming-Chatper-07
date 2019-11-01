// while문의 중첩
// 프로그램 사용자로부터 총 5개의 정수를 입력 받아서 그 수의 합을 출력하는 프로그램 작성. 단 정수는 무조건 1이상 만약 1미만의 정수 입력시 재 입력 요구, 
// 결국 1 이상의 5개의 정수를 입력 받아서 그 합을 출력 하는 것

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int input, num, total = 0;
	int a, b, c, d, e;

	printf("Please insert Five number : \n");
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);

	while (a < 1)
	{
		printf("Wrong number insert the number that is higher than 0 : ");
		scanf_s("%d", &a);
	}

	while (b < 1)
	{
		printf("Wrong number insert the number that is higher than 0 : ");
		scanf_s("%d", &b);
	}

	while (c < 1)
	{
		printf("Wrong number insert the number that is higher than 0 : ");
		scanf_s("%d", &c);
	}

	while (d < 1)
	{
		printf("Wrong number insert the number that is higher than 0 : ");
		scanf_s("%d", &d);

	}

	while (e < 1)
	{
		printf("Wrong number insert the number that is higher than 0 : ");
		scanf_s("%d", &e);
	}


	total = a + b + c + d + e;
	printf("The average of your number is %f", (double)total / 5);
	

	return 0;
}