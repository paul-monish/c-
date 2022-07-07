//DATE :- 28.05.22
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
bool stack::push(int val){
	if(sp<maxsize-1){
		data[++sp]=val;
		return true;
	}
	else
		return false;
}
bool stack::pop(int &v){
	if(sp==-1)
		return false;
	else{
		v=data[sp--];
		return true;
	}
}
int main(){
	stack s1;
	char ch;
	cout<<"Enter your choice"<<endl;
	cin>>ch;
	switch(ch){
		case 1: int value;
				cout<<"Enter value to push"<<endl;
				cin>>value;
				if(s1.push(value))
					cout<<"successful"<<endl;
				else
					cout<<"overflow"<<endl;
				break;
		case 2: int val;
		if(s1.pop(val))
			cout<<"popped value"<<val<<endl;
		else
			cout<<"underflow"<<endl;
		break;
	}
	return 0;
}
