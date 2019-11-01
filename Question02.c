//프로그램 사용자로 부터 양의 정수를 하나 입력 받은 다음 그 수만큼 3의 배수를 출력 하는 프로그램을 작성
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int i = 1, num;
	printf("Please insert a number: ");
	scanf_s("%d", &num);

	while (i <= num)
	{
		printf("%d\n", i * 3);
		i++;
	}

	return 0;
}