//프로그램 사용자로 부터 양의 정수를 하나 입력 받은 다음 그 수만큼 3의 배수를 출력 하는 프로그램을 작성
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int i;
	int j = 1;// 반복하는 횟수를 위한 변수 0-- > 0부터 곱하고 싶지 않기에 시작을 1로 했다.
	printf("Please insert a nuber : ");
	scanf_s("%d", &i);

	while (j <= i)
	{
		printf("%d\n", 3 * j);// 단순하다. 실행 하는 만큼 3을 곱해주면 된다
		j++;
	}


	return 0;
}