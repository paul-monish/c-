#include<iostream>
using namespace std;
void interchange(int *ptoa,int &x){//stack fram of interchnage function all are store
	//int *ptoa=&a
	//int &x=b
	*ptoa=*ptoa^x;
	x=*ptoa^x;
	*ptoa=*ptoa^x;
}
int main(){
	int a,b;
	cout<<"Enter value of a"<<endl;//cout ia an object of ostream class
	cin>>a;//cin is an object of istream
	cout<<"Enter value of b"<<endl;//cout ia an object of ostream class
	cin>>b;//cin is an object of istream
	cout<<"Before interchanging values of a and b are:"<<a<<" "<<b<<endl;
	interchange(&a,b);
	cout<<"After interchanging values of a and b are:"<<a<<" "<<b<<endl;
	return 0;
}
