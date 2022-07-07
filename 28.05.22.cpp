//DATE :- 28.05.22
//SHALLOW COPY vs DEEP COPY
#include<iostream>
using namespace std;
class stack{
	int sp;
	int *data;
	int maxsize;
public:
	stack(int=20);
	stack(const stack&);
bool push(int);
stack& operator=(const stack&);
bool pop(int&);
	~stack();
};
/* SHALLOW COPY 
stack::stack(const stack& obj){
	this->sp=obj.sp;
	this->data=obj.data;
	this->maxsize=obj.maxsize;
}*/

/* DEEP COPY 
stack::stack(const stack& obj){
	this->sp=obj.sp;
	this->maxsize=obj.maxsize;
	this->data=new int[maxsize];
	for(int i=0;i<maxsize;i++)
		this->data[i]=obj.data[i];
} */

/*
stack::stack(int m){
	this->sp=-1;
	this->maxsize=m;
	this->data=new int[maxsize];
}*/
/*
//compiler provides default overload assignment only for assignment operator
stack& stack::operator=(const stack& obj){
	this->sp=obj.sp;
	this->data=obj.data;
	this->maxsize=obj.maxsize;
	return(*this);	//deferencing this
}
*/

stack& stack::operator=(const stack& obj){
	if(this!=&obj){	//this if is for in case of self assignment
	this->sp=obj.sp;
	maxsize=obj.maxsize;
	delete[] data;	//so that there is no memory leak
	data=new int[maxsize];
	for(int i=0;i<maxsize;i++)
		this->data[i]=obj.data[i];
	}
	return(*this);	//deferencing this
}

stack::~stack(){}	//destructor code

int main(){
	stack s1;
	stack s2=s1;	//s2.stack(s1)
//	stack s3(s1);
	stack s3;	//s3.stack()
	stack s4;
	s4=s1;	//s4.operator=s1
	s3=s2=s4=s1;	//chain of assignment
	s4=s4;	//self assignment
	
	return 0;
}
