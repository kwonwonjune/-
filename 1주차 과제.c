#include <stdio.h>

int main(void)
{
	int i = 0;
	int arr[10] = { 0 };
	int j;
	int temp;

	while (i < 10)
	{
		printf("���� �Է�%d >", i);
		scanf_s("%d", &arr[i]);
		for (j = 0; j < i; j++) {
			if (arr[i] == arr[j])
			{
				i--;
				printf("�ߺ��Դϴ�. �ٽ� �õ����ּ���");
				printf("\n");
			}
		}
		i++;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d, ", arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}
	printf("\n");
	printf("������������ ����: ");
	for (i = 0; i < 10; i++)
		{
		printf("%d, ", arr[i]);
		}
	printf("\n");
}
	/*
	���⿡ �Է¹��� ���ڿ����� ���� �ڵ� �ۼ��� ��
	EX) INPUT: 9, 1, 3 ,4, 5, 7, 2, 6, 8, 10
	OUTPUT: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	*/

