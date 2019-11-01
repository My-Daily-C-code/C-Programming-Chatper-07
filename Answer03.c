// 프록그램 사용자로부터 계속해서 정수를 입력 받는다. 그리고 그 값을 계속해서 더해 나간다. 이러한 작업은 프로그램 사용자가 0을 입력할 때까지 계속 되어야 하며, 0이 입력 되면 
// 모든 정수의 합을 출력 하고 프로그램을 종료 시킨다.
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int i = 1; // 왜 i는 0이 아닌 1로 시작 하는가? --> 0을 입력하면 프로세스가 종료 되므로 0으로 값을 초기화 하면 안된다. 
	int total = 0;
	while (i != 0) // (i =!0)과는 무슨 차이 인가? --> 여기서 = 과 ! 는 따로 생각을 해야 한다. != 같지 않음
	{
		printf("Please insert your degit : ");
		scanf_s("%d", &i);
		total += i; // 이것이 의미하는 바는 무엇인가? --> total = total + i 와 같은 뜻 total 변수에 i값을 더한 값을 저장
	}

	printf("The result is %d\n", total);
	return 0;
}