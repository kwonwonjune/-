#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	char word[10] = { 0 };	//10ĭ�� �������� �� ���ڰ� ���Ƿ� 9���ڱ��� �Է°���
	int i;
	printf("�ܾ�� �� �����ΰ���? (9���� ����)");
	scanf("%d", &i);
	int t = (i + 1) / 2;

	printf("�ܾ �Է��ϼ���(10���� ����): ");
	scanf("%s", word);	//�Է��� ���ڿ��� word�迭�� ����

	if (i % 2 == 1)	//Ȧ���� ��� 
	{
		printf("��� ���ڴ� %c", word[t - 1]); //t�� �߰���ġ�� ���ڸ� ��Ÿ���Ƿ� �迭������ -1�� ��
	}
	if (i % 2 == 0)	//¦���� ���
	{
		printf("��� ���ڴ� %c,%c", word[t - 1], word[t]);
	}
	return 0;
}

