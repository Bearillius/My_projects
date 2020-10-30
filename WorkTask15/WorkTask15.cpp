#include "stdafx.h";
#include <iostream>;
 using namespace std;


 struct TNode{
 int d;
 TNode*p;
  };

 void create(TNode**begin, TNode**end, int d){
	 *begin = new TNode;
	 (*begin)->d=d;
	 (*begin)->p= NULL;
	 *end = *begin;
 }
	 void add(TNode**begin, TNode**end, int d){
		 TNode*pv = new TNode;
		 pv->d = d;
		  pv->p = NULL;

		  (*end)->p	= pv;
		  *end = pv;
	 }

	 int unpush(TNode**begin){
		int temp = (*begin)->d;
		 TNode*pv = *begin;
		 *begin = (*begin)->p;
		 delete pv;
		 return temp;
	 }


int _tmain(int argc, _TCHAR* argv[])
{
	TNode *begin = NULL;
	TNode *end = NULL;
    int N = 0,d = 0,i = 0;

	cout<<"Enter elements: "<<endl;
	cin>>N;
	
	do{
		cout<<"Enter elements valuo: "<<endl;
		cin>>d;

		if(i==0)
			create(&begin,&end, d);
		else
			add(&end,&begin, d);

		i++;
	}
	while(i<N);

	for(int n = 0; n<N-1; n++){
		
		cout<<"First element: "<<unpush(&begin);
	}


}

