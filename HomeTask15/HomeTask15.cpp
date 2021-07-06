#include <iostream>
using namespace std;

struct TNode {
	int Data, elem;
	TNode* pNext;
	TNode* pPrev;
};

void create(TNode** pBegin, TNode** pEnd, int Data) {
	*pBegin = new TNode;
	(*pBegin)->Data = Data;
	(*pBegin)->pNext = NULL;
	(*pBegin)->pPrev = NULL;
	*pEnd = *pBegin;
}

void add(TNode** pEnd, int Data) {
	TNode* pv = new TNode;
	pv->Data = Data;
	pv->pNext = NULL;
	pv->pPrev = *pEnd;
	(*pEnd)->pNext = pv;
	*pEnd = pv;
}

TNode* find(TNode* pBegin, int key) {
	TNode* pCurrent = pBegin;
	while (pCurrent->pNext != NULL) {
		if (pCurrent->Data == key) break;
		pCurrent = pCurrent->pNext;
	}
	return pCurrent;
}

int del(TNode** pBegin, TNode** pEnd, int key) {
	TNode* pPrev = NULL;
	TNode* pCurrent = find(*pBegin, key);
	int value = pCurrent->Data;

	if (pCurrent == *pBegin) {
		*pBegin = (*pBegin)->pNext;
		(*pBegin)->pPrev = NULL;
	}
	else if (pCurrent == *pEnd) {
		*pEnd = (*pEnd)->pPrev;
		(*pEnd)->pNext = NULL;
	}
	else {
		(pCurrent->pPrev)->pNext = pCurrent->pNext;
		(pCurrent->pNext)->pPrev = pCurrent->pPrev;
	}

	delete pCurrent;
	return value;
}

void push(TNode** pBegin, TNode** pEnd, int key, int Data) {
	TNode* pCurrent = find(*pBegin, key);
	
	if (pCurrent != NULL) {
		if (pCurrent == *pEnd) {
			add(pEnd, Data);
		}
		else {
			TNode* pv = new TNode;
			
			pv->Data = Data;
			pv->pNext = pCurrent->pNext;
			pCurrent->pNext = pv;

			pv->pPrev = pCurrent;
			pCurrent = pv;

		}
	}
}

void Print(TNode* pBegin)
{
	TNode* n = pBegin;

	while (n)
	{
		cout << n->Data << "  ";
		n = n->pNext;
	}
	cout << endl;
}

int main()
{
	TNode* pBegin = NULL;
	TNode* pEnd = NULL;
	int N = 0, Data = 0, i = 0;
	int key;

	cout << "Enter elements: " << endl;
	cin >> N;
	do {
		cout << "Enter elements valuo: " << endl;
		cin >> Data;

		if (i == 0)
			create(&pBegin, &pEnd, Data);
		else
			add(&pEnd, Data);
		i++;
	} while (i < N);

	cout << "The items in the List: " << endl;
	Print(pBegin);
	
	cout << "Enter the delete item : " << endl;
	cin >> key;
	del(&pBegin, &pEnd, key);
	cout << "The items in the List: " << endl;
	Print(pBegin);

	
	cout << "Enter element for insert: " << endl;
	cin >>Data;

	cout << "The element after which to insert: " << endl;
	cin >> key;
	push(&pBegin, &pEnd, key, Data);

	cout << "The items in the List: " << endl;
	Print(pBegin);

	system("pause");
	return 0;
}
