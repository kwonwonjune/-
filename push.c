#include<stdio.h>

int main(void)
{
	int i;
	int t;
	int arr[10] = { 0 };	//10자리 배열의 값을 0으로 초기화

	for (i = 0; i < sizeof(arr) / sizeof(int); i++) //sizeof는 배열의 크기를 나타낸다.
	{
		printf("%d번쨰 공간에 들어갈 값을 입력하시오.", i+1);	//배열은 0이 첫번째 자리여서 i+1을 해준다.
		scanf_s("%d", &t);
		arr[i] = t;	//입력받은 값을 배열에 넣어준다.
	}
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {	//받은 값이 들어있는 배열을 반복출력한다.
		printf("%d ", arr[i]);
	}
	return 0;
}

