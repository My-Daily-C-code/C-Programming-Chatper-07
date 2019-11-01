// 프록그램 사용자로부터 계속해서 정수를 입력 받는다. 그리고 그 값을 계속해서 더해 나간다. 이러한 작업은 프로그램 사용자가 0을 입력할 때까지 계속 되어야 하며, 0이 입력 되면 
// 모든 정수의 합을 출력 하고 프로그램을 종료 시킨다.
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num = 1;
	int total = 0;

	while (num != 0) // 나중에 질문을 해볼 것
	{
		printf("insert a number: ");
		scanf_s("%d", &num);
		total +=num;
	}

	

	printf("The result is %d\n", total);

	return 0;
}