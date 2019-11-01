//프로그램 사용자로부터 총 개의 정수를 입력 받아서, 그 수의 합을 출력하는 프로그램을 작성해 보자.
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int sum = 0, num = 0, i = 0;

	while (i < 5)// i의 값은 5이하로 입력 받겠다 --> 굳이 5개의 변수를 선언하지 않아도 된다.
	{
		while (num <= 0)// 입력 받은 변수가 0이 아닐 경우, 만약 0을 입력 하였다면 다시 입력을 실행해야 함.
		{
			printf("Please insert number, higher than 0 : ");
			scanf_s("%d", &num);
		}
		sum += num;// 누적 값을 계산
		num = 0;// 이거는 왜 추가 하는 거여? --> num의 값을 초기화 하기 위해서!
		i++;
	}
	printf("the result : %d\n", sum);

return 0;

}