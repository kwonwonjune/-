#include<stdio.h>

int main(void)
{
	int i;
	int t;
	int arr[10] = { 0 };	//10�ڸ� �迭�� ���� 0���� �ʱ�ȭ

	for (i = 0; i < sizeof(arr) / sizeof(int); i++) //sizeof�� �迭�� ũ�⸦ ��Ÿ����.
	{
		printf("%d���� ������ �� ���� �Է��Ͻÿ�.", i+1);	//�迭�� 0�� ù��° �ڸ����� i+1�� ���ش�.
		scanf_s("%d", &t);
		arr[i] = t;	//�Է¹��� ���� �迭�� �־��ش�.
	}
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {	//���� ���� ����ִ� �迭�� �ݺ�����Ѵ�.
		printf("%d ", arr[i]);
	}
	return 0;
}

