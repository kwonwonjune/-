#include<stdio.h>
int main(void)
{
	int x;	//x변수 선언.
	int *p;	//포인터 변수 p선언
	p = &x;	//p에 x의 주소를 보관.
	*p *= 10;//p가 가리키는 변수인 x에 10을 대입한다.
			//*p는 int형이 된다.
	printf("%d", *p);	//p가 가리키는 변수값을 출력
}