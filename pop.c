#include<stdio.h>
#include<string.h> //memmove�Լ��� ����ϱ� ���ؼ� �߰��� ���
int main(void)
{
	int i;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int Arr[10] = { 0 };
	
	for (i = sizeof(arr) / sizeof(int); i >0 ; i--) //sizeof�� �迭�� ũ�⸦ ��Ÿ����.
	{
		memmove(Arr[10], arr[10], 4);
	}
	for (i = 0; i < sizeof(Arr) / sizeof(int); i++) {	//������ ���� ����ִ� �迭�� �ݺ�����Ѵ�.
		printf("%d ", arr[i]);
	return 0;
}

