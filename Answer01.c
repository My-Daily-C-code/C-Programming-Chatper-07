//프로그램 사용자로부터 양의 정수를 하나 받아서, 그 수만큼 "Hello world"를 출력 하는 프로그램
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int i = 0; // 얼만큼 실행 할 것인지에 대한 횟수를 지정 하는 것이다. --> 0번째서부터 시작
	int num; // 이쪽으로 정수를 입력 받는다.
	printf("Please insert a diget : ");
	scanf_s("%d", &num);

	while (i<num)
	{
		printf("Hello world!\n");
		i++;// 얼만큼 실행 할 것인지 횟수를 증가시키면서 num보다는 작게 실행하여 목표하는 프로그램을 제작
	}

	return 0;
}