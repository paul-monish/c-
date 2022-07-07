#include<iostream>
using namespace std;
//#include<bits/stdc++.h>
int main(){
	int a;
	
	cout<<"Enter value of a"<<endl;//cout ia an object of ostream class
	cin>>a;//cin is an object of istream
	int &x=a;//x is reference variable of a
	cout<<"a="<<a<<endl;
	cout<<"x="<<x<<endl;
	x=20;
	cout<<"a="<<a<<endl;
	cout<<"x="<<x<<endl;
	//int *ptoa=&a;
	int *ptoa=&x;
	*ptoa=30;
	cout<<"a="<<a<<endl;
	cout<<"x="<<x<<endl;
	
	return 0;
}
