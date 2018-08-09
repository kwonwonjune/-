#include<stdio.h>
int main(void)
{
	int arr[3];	//입력한 숫자가 들어갈 배열
	int t;	//정렬을 위한 빈 함수
	int a, b, c;	//반복문을 위한 함수

	for (a = 0; a < 3; a++) {
		printf("%d번쨰 정수를 입력하세요 :", a + 1);
		scanf_s("%d", &arr[a]);
		printf("\n");
	}
	for (b = 0; b < 3; b++) {
		for (c = 0; c < 2; c++) {
			if (arr[c] > arr[c + 1]) {
				t = arr[c + 1];
				arr[c + 1] = arr[c];
				arr[c] = t;
			}
		}
	}
	printf("가장 작은수는 %d입니다.", arr[0]);
}


