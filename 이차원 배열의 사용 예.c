#include<stdio.h>
int main(void)
{
	short data[2][3];	//2차원배열 선언
	int i, j;
	data[0][0] = 1;	//가장 오른쪽 인덱스부터
	data[0][1] = 2;	//증가된다.
	data[0][2] = 3;

	data[1][0] = 4;	//그다음 왼쪽 인덱스가
	data[1][1] = 5;	//증가된다.
	data[1][2] = 6;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d", data[i][j]);
		}
		printf("\n ");
	}
	return 0;
}



