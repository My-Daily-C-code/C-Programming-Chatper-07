#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
//프로그램 사용자로부터 입력 받은 정수의 평균을 출력하는 프로그래을 작성 
//조건 1: 먼저 몇개의 정수를 입력 할 것인지 프로그램 사용자에게 묻는다. 그리고 그 수만큼 정수를 입력 받는다
//조건 2: 입력 받은 정수의 평균을 구한다. 평균은 소수점 이하 까지 계산.
int main()
{
	int total = 0;
	int num;
	int i = 0;
	int input;
	printf("Please insert a mount of your number : ");
	scanf_s("%d", &num);

	while (i++ < num)
	{
		printf("insert a number : ");
		scanf_s("%d", &input);
		total += input;
	}

	printf("The avg of your input %f", (double)total/num);

	return 0;
}