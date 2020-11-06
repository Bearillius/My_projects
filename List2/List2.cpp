#include "stdafx.h";
#include <iostream>;
 using namespace std;


 struct TNode{
 int Data;
 TNode*pNext;
 TNode *pPrev;
  };

 void create(TNode**pBegin, TNode**pEnd, int Data){
	 *pBegin = new TNode;
	 (*pBegin)->Data=Data;
	 (*pBegin)->pNext= NULL;
	 (*pBegin)->pPrev= NULL;
	 *pEnd = *pBegin;
 }

	 void add(TNode**pEnd, int Data){
		 TNode*pv = new TNode;
		 pv->Data = Data;
		  pv->pNext = NULL;
		  pv->pPrev = *pEnd;
		  (*pEnd)->pNext = pv;
		  *pEnd = pv;
		  	 }
	 
	 	TNode* find(TNode *pBegin, int key){
		 TNode *pCurrent = pBegin;
		 while (pCurrent->pNext != NULL){
			 if(pCurrent->Data == key) break;
						pCurrent = pCurrent->pNext;
			 		 }
		 return pCurrent;
		}
		
		 int del(TNode**pBegin, TNode **pEnd,	int key){
		 TNode *pPrev = NULL;
		 TNode *pCurrent = find(*pBegin, key);
		 int value = pCurrent->Data;

		 if(pCurrent == *pBegin){
			 *pBegin = (*pBegin)->pNext;
			 (*pBegin)->pPrev = NULL;
					 }
		 else if (pCurrent == *pEnd){
			 *pEnd	= (*pEnd)->pPrev;
			 (*pEnd)->pNext = NULL;
		 }
		 else{
			 (pCurrent->pPrev)->pNext = pCurrent->pNext;
			 (pCurrent->pNext)->pPrev = pCurrent->pPrev;
		 }

		 delete pCurrent;
		 return value;
	 }

		 void push(TNode**pBegin, TNode **pEnd,	int key, int Data){
		     TNode *pCurrent = find(*pBegin, key);
			 if (pCurrent != NULL){
				 if (pCurrent == *pEnd){
					 add(pEnd, Data);}
				else {
					TNode *pv = new TNode;
					pv->Data = Data;
					pv->pPrev = pCurrent->pNext;
					pv->pNext = pCurrent;
					(pCurrent->pNext)->pPrev = pv;
					pCurrent->pNext = pv;
				}
		 }
		 }


	int _tmain(int argc, _TCHAR* argv[])
{
	TNode *pBegin = NULL;
	TNode *pEnd = NULL;
    int N = 0, Data = 0,i = 0; 
	int key;
	
	cout<<"Enter elements: "<<endl;
	cin>>N;
	do{
		cout<<"Enter elements valuo: "<<endl;
		cin>>Data;
			
		if(i==0)
			create(&pBegin,&pEnd, Data);
		else
			add(&pEnd, Data);
				i++;
				}
	while(i<N);

	cout<<"Enter element for insert: "<<endl;
	cin>>key;
	push(&pBegin, &pEnd, key, Data);


}

