#include<stdio.h>
#include<string.h> //memmove함수를 사용하기 위해서 추가한 헤더
int main(void)
{
	int i;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int Arr[10] = { 0 };
	
	for (i = sizeof(arr) / sizeof(int); i >0 ; i--) //sizeof는 배열의 크기를 나타낸다.
	{
		memmove(Arr[10], arr[10], 4);
	}
	for (i = 0; i < sizeof(Arr) / sizeof(int); i++) {	//추출한 값이 들어있는 배열을 반복출력한다.
		printf("%d ", arr[i]);
	return 0;
}

