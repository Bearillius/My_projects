#include <iostream>;
using namespace std;

struct TNode {
	int Data;
	TNode* pNext;
};

void create(TNode** pBegin, TNode** pEnd, int Data) {
	*pBegin = new TNode;
	(*pBegin)->Data = Data;
	(*pBegin)->pNext = NULL;
	*pEnd = *pBegin;
}
void add(TNode** pEnd, int Data) {
	TNode* pv = new TNode;
	pv->Data = Data;
	pv->pNext = NULL;
	(*pEnd)->pNext = pv;
	*pEnd = pv;
}

TNode* find(TNode* pBegin, TNode** pPrev, int key) {
	TNode* pCurrent = pBegin;
	while (pCurrent->pNext != NULL) {
		if (pCurrent->Data == key) break;
		*pPrev = pCurrent;
		pCurrent = pCurrent->pNext;

	}
	return pCurrent;
}

int del(TNode** pBegin, TNode** pEnd, int key) {
	TNode* pPrev = NULL;
	TNode* pCurrent = find(*pBegin, &pPrev, key);
	int value = pCurrent->Data;

	if (pCurrent == *pBegin) {
		*pBegin = (*pBegin)->pNext;
	}
	else if (pCurrent == *pEnd) {
		*pEnd = pPrev;
		(*pEnd)->pNext = NULL;
	}
	else {
		pPrev->pNext = pCurrent->pNext;
	}

	delete pCurrent;
	return value;
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

	cout << "Enter the desired element: " << endl;
	cin >> key;
	cout << '\n';

	del(&pBegin, &pEnd, key);

	cout << "The items in the List: " << endl;
	Print(pBegin);

	system("pause");
}