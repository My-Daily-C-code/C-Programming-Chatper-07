//���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ�, �� ���� ���� ����ϴ� ���α׷��� �ۼ��� ����.
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int sum = 0, num = 0, i = 0;

	while (i < 5)// i�� ���� 5���Ϸ� �Է� �ްڴ� --> ���� 5���� ������ �������� �ʾƵ� �ȴ�.
	{
		while (num <= 0)// �Է� ���� ������ 0�� �ƴ� ���, ���� 0�� �Է� �Ͽ��ٸ� �ٽ� �Է��� �����ؾ� ��.
		{
			printf("Please insert number, higher than 0 : ");
			scanf_s("%d", &num);
		}
		sum += num;// ���� ���� ���
		num = 0;// �̰Ŵ� �� �߰� �ϴ� �ſ�? --> num�� ���� �ʱ�ȭ �ϱ� ���ؼ�!
		i++;
	}
	printf("the result : %d\n", sum);

return 0;

}