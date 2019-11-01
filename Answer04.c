#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
// 프로그램 사용자로 부터 입력 받은 숫자에 해당하는 구구단을 출력 하되, 역순으로 출력 하는 프로그램을 작성
int main()
{
	int i = 10;
	int num;

	printf("Please insert a number : ");
	scanf_s("%d", &num);

	while (i>0)
	{
		printf("%d\n", num*i);
		i--;
	}


	return 0;
}
