#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
//프로그램 사용자 로부터 입력 받은 정수의 평균을 출력하는 프로그램을 작성 하되 다음 두 가지 조건을 만족 시킬 것
// 1.먼저 몇개의 정수를 입력 할 것인지 프로그램 사용자에게 물어본다  2. 그리고 그 수만큼 정수를 입력 받는다. 3. 평균 값은 소수점 이하까지 계산
int main()
{
	int total = 0;// 평균 값을 위한 변수 --> 0으로 초기화 하지 않으면 에러 발생 
	//변수를 처음 만들게 되면 기존 메모리에 들어있는 값을 그대로 사용하게 되기 때문에 어떤 값이 들어있는지 알 수 없습니다. 그래서 예외 발생의 가능성이 있죠. 
	//따라서 프로그램이 변수에 들어있는 값을 예상할 수 있는 범위 이내에 두게 하기 위해 초기화를 진행합니다.
	int i = 0;
	int num; // 몇개의 정수를 입력 할 것인지에 대한 변수
	int input; // 실제로 입력 받는 정수의 수

	printf("How many diget will you going to enter? : ");
	scanf_s("%d", &num);
	printf("%d it is\n", num);

	while (i++ < num)// --> i의 값은 계속 증가시키지만 num미만으롷 증가 시킨다. num은 몇개의 정수를 입력한다는 뜻이고 i는 그 전부터 더해 나가는 정수의 영역
	{
		printf("Insert the diget : ");
		scanf_s("%d", &input);
		total += input;//  total에 input의 값을 계속 해서 더하고 저장한다.
	}

	printf("The average of your insert deigt is : %f", (double)total / num);// 명시적 형변환 == 대 놓고 형변환을 실시함

	return 0;
}