#include<iostream>
#include<cstdlib>
#include<malloc.h>
using namespace std;

class Stack{
	int sp;
	int *data;
	int maxSize;
	public:
		Stack(int=5);//default argument constructor
		Stack(const Stack&);
		Stack& operator =(const Stack&);
		~Stack();
		bool push(int);
		bool pop(int&);
};

Stack::Stack(int m){
	cout<<"default arg constructor called for object"<<this<<endl;
	this->sp=-1;
	try{
		data=new int[maxSize];
	}
	catch(bad_alloc ba){
		cout<<"allocation failed..";
		exit(1);
	}
}

Stack::Stack(const Stack &obj){
	cout<<"copy constructor called for object"<<this<<endl;
	this->sp=obj.sp;
	data=new int[maxSize=obj.maxSize];
	for(int i=0;i<maxSize;i++)
		data[i]=obj.data[i];
}
Stack& Stack::operator =(const Stack &obj){
	cout<<"= operator called for object"<<this<<endl;
	if(this!=&obj){ //validation for self assignment
		this->sp=obj.sp;
		delete[] data;
		data=new int[maxSize=obj.maxSize];
		for(int i=0;i<maxSize;i++)
		data[i]=obj.data[i];
	}
	return (*this);
}
Stack::~Stack(){
	cout<<"destructor called for object"<<this<<endl;
	delete[] data;
}
bool Stack::push(int a){
	cout<<"push operation called for object"<<this<<endl;
	if(sp<maxSize-1){
		cout<<"push"<<endl;
		data[++sp]=a;
		return true;
	}
	else{
		return false;
	}
}

bool Stack::pop(int &s){
	cout<<"pop operation called for object"<<this<<endl;
	if(sp==-1)
		return false;
	else{
		cout<<"pop"<<endl;
		s=data[sp--];
		return true;
	}
}

int main(){
	int n,val,ch;
	cout<<"Max Size:"<<endl;
	cin>>n;
	Stack s1(n);
	do{
		cout<<"Enter input as \n 1.push.\n 2.pop. \n 3.exit."<<endl;
		cout<<"choice:"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				int val;
				cout<<"Enter Value to push"<<endl;
				cin>>val;
				if(s1.push(val))
					cout<<"push success!";
				else
					cout<<"overflow"<<endl;
				break;
			case 2:
				int value;
				if(s1.pop(value))
					cout<<"poped value:"<<value<<endl;
				else
					cout<<"underflow"<<endl;
				break;
			case 3:
				cout<<"exiting!!"<<endl;
				exit(0);
			default:
				cout<<"Wrong Entry!";
		}
		}while(1);
	return 0;
}
