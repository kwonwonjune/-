#include<stdio.h>
int main(void)
{
	int x;	//x변수 선언
	int *p;	//포인터 변수 p선언
	p = &10;//상수의 주소를 구할 수 없으므로 에러.
	p = &(x + 10);//수식도 불가능하므로 에러.
}