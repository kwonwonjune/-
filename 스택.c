#include<stdio.h>

#define sta 10        // ������ ���� 10 ����
#define TRUE 1        //TRUE ��ȯ�� 0 ����
#define FALSE 0		//FALSE ��ȯ�� 0 ����

typedef int Data;    //typedef�� �ڷ����� ���ο� �̸� Data�� �ο�                               

typedef struct array_stack {	//typedef�� ����ü�� ��Ī�� �ο�
	Data Arr[sta];	//���̰� sta�� �迭 ����
	int top;
} array_stack;	//typedef�� ����� ����ü ��Ī�� ����

// ���� ��� ��ȯ
typedef array_stack Stack; //Stack���� �����̸��� ��ȯ

// ���� �ʱ� ����
void stack_init(Stack *pstack) {	//stack�� ������ ���� pstack���� ����
	pstack->top = -1;	//top���� -1�� ����
}
// �� ���� Ȯ��
int IsEmpty(Stack *pstack) {	//ISEmpty�Լ��� �̿��� ������ ������� Ȯ��
	if (pstack->top == -1)	//top���� -1�̸� ������ ����ٴ� ���̹Ƿ�
		return TRUE;		//TRUE�� ��ȯ�Ѵ�.
	else
		return FALSE;		//�װ� �ƴ϶�� FALSE�� ��ȯ�Ѵ�.
}

// ������ ����
void Push(Stack *pstack, Data Data) {
	pstack->top += 1;
	pstack->Arr[pstack->top] = Data;
}

// ������ ����
void Pop(Stack *pstack) {

	if (IsEmpty == TRUE) {
		printf("memory error!");
		exit(-1);
	}

	pstack->top -= 1;
}

// top index�� ������ Ȯ��
Data peek(Stack *pstack) {
	if (IsEmpty == TRUE) {
		printf("memory error!");
		exit(-1);
	}

	return pstack->Arr[pstack->top];
}

// stack ���尪 ���
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
