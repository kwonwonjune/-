#include<stdio.h>
int main(void)
{
	int arr[3];	//�Է��� ���ڰ� �� �迭
	int t;	//������ ���� �� �Լ�
	int a, b, c;	//�ݺ����� ���� �Լ�

	for (a = 0; a < 3; a++) {
		printf("%d���� ������ �Է��ϼ��� :", a + 1);
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
	printf("���� �������� %d�Դϴ�.", arr[0]);
}


