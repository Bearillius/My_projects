#include <iostream>;

struct TNode {
	int d;
	TNode* p;
};

void push(TNode** top, int D) {
	TNode* pv;
	pv = new TNode();
	pv->d = D;
	if (top == NULL) {
		*top = pv;
	}
	else
	{
		pv->p = *top;
		*top = pv;
	}
}

void pop(TNode** top, int N) {
	TNode* pv = *top;
	TNode* prev = NULL;
	while (pv != NULL) {
		if (pv->d == N) {
			if (pv == *top) {
				*top = pv->p;
				free(pv);
				pv->d = NULL;
				pv->p = NULL;
			}
			else
			{
				prev->p = pv->p;
				free(pv);
				pv->d = NULL;
				pv->p = NULL;
			}
		}
		prev = pv;
		pv = pv->p;
	}
}

void prints(TNode* top) {
	TNode* pv = top;
	while (pv) {
		printf_s("%i", pv->d);
		pv = pv->p;
	}
}

void main() {
	TNode* top = NULL;

	push(&top, 1);
	push(&top, 2);
	push(&top, 3);
	push(&top, 4);
	push(&top, 5);


	prints(top);
	pop(&top, 4);
	printf_s("\n");
	prints(top);
	system("pause");
}