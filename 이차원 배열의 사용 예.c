#include<stdio.h>
int main(void)
{
	short data[2][3];	//2�����迭 ����
	int i, j;
	data[0][0] = 1;	//���� ������ �ε�������
	data[0][1] = 2;	//�����ȴ�.
	data[0][2] = 3;

	data[1][0] = 4;	//�״��� ���� �ε�����
	data[1][1] = 5;	//�����ȴ�.
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



