#include<stdio.h>

#define sta 10        // 스택의 길이 10 정의
#define TRUE 1        //TRUE 반환값 0 정의
#define FALSE 0		//FALSE 반환값 0 정의

typedef int Data;    //typedef로 자료형에 새로운 이름 Data를 부여                               

typedef struct array_stack {	//typedef로 구조체에 별칭을 부여
	Data Arr[sta];	//길이가 sta인 배열 선언
	int top;
} array_stack;	//typedef를 사용해 구조체 별칭을 정의

// 스택 명명 변환
typedef array_stack Stack; //Stack으로 스택이름을 변환

// 스택 초기 설정
void stack_init(Stack *pstack) {	//stack을 포인터 변수 pstack으로 선언
	pstack->top = -1;	//top값을 -1로 설정
}
// 빈 스택 확인
int IsEmpty(Stack *pstack) {	//ISEmpty함수를 이용해 스택이 비었는지 확인
	if (pstack->top == -1)	//top값이 -1이면 스택이 비었다는 뜻이므로
		return TRUE;		//TRUE를 반환한다.
	else
		return FALSE;		//그게 아니라면 FALSE를 반환한다.
}

// 데이터 삽입
void Push(Stack *pstack, Data Data) {
	pstack->top += 1;
	pstack->Arr[pstack->top] = Data;
}

// 데이터 삭제
void Pop(Stack *pstack) {

	if (IsEmpty == TRUE) {
		printf("memory error!");
		exit(-1);
	}

	pstack->top -= 1;
}

// top index의 데이터 확인
Data peek(Stack *pstack) {
	if (IsEmpty == TRUE) {
		printf("memory error!");
		exit(-1);
	}

	return pstack->Arr[pstack->top];
}

// stack 저장값 출력
void print(Stack *pstack) {
	int i;
	if (IsEmpty == TRUE) {
		printf("memory error!");
		exit(-1);
	}

	for (i = 0; i < (pstack->top) + 1; i++) {
		printf("%d\n", pstack->Arr[i]);
	}
}


int main() {
	Stack stack;
	stack_init(&stack);

	Push(&stack, 1);
	Push(&stack, 4);
	Push(&stack, 5);
	Push(&stack, 3);
	Push(&stack, 1);

	print(&stack);
}
