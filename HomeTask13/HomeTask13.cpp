#include <iostream>
using namespace std;

struct TNode {
    int Data;
    TNode* Next;
};

void create(TNode** Begin, TNode** End, int Data) {
	*Begin = new TNode;
	(*Begin)->Data = Data;
	(*Begin)->Next = NULL;
	*End = *Begin;
}

void add(TNode** End, int Data) {
	TNode* pv = new TNode;
	pv->Data = Data;
	pv->Next = NULL;
	(*End)->Next = pv;
	*End = pv;
}

TNode* find(TNode* Begin, TNode** Prev, int key) {
	TNode* Current = Begin;
	while (Current->Next != NULL) {
		if (Current->Data == key) break;
		*Prev = Current;
		Current = Current->Next;
			}
	return Current;
}

int del(TNode** begin) {

	int tmp = (*begin)->Data;
	TNode* pv = *begin; 
	*begin = (*begin)->Next; 
	
	delete pv; 
	return tmp;
}

void Print (TNode* Begin)
{
	TNode* n = Begin;

	while (n)
	{
		cout << n->Data << "  ";
		n = n->Next;
	}
	cout << endl;
}

int main()
{
	TNode* Begin = NULL;
	TNode* End = NULL;
	int N = 0, Data = 0, i = 0;
	
	cout << "Enter elements: " << endl;
	cin >> N;

	do {
		cout << "Enter elements valuo: " << endl;
		cin >> Data;

		if (i == 0)
			create(&Begin, &End, Data);
		else
			add(&End, Data);
		i++;
	} while (i < N);

	cout << "The items in the queue: " << endl;
	Print(Begin);

	del(&Begin);

	cout << "The items in the queue: " << endl;
	Print(Begin);

	system("pause");
	return 0;
}