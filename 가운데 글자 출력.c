#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	char word[10] = { 0 };	//10칸중 마지막은 널 문자가 들어가므로 9글자까지 입력가능
	int i;
	printf("단어는 몇 글자인가요? (9글자 이하)");
	scanf("%d", &i);
	int t = (i + 1) / 2;

	printf("단어를 입력하세요(10글자 이하): ");
	scanf("%s", word);	//입력한 문자열을 word배열에 저장

	if (i % 2 == 1)	//홀수의 가운데 
	{
		printf("가운데 글자는 %c", word[t - 1]); //t는 중간위치의 글자를 나타내므로 배열에서는 -1을 해
	}
	if (i % 2 == 0)	//짝수의 가운데
	{
		printf("가운데 글자는 %c,%c", word[t - 1], word[t]);
	}
	return 0;
}

