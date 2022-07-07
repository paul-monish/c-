#include<iostream>
#include<stdio.h>
using namespace std;
#define SIZE 10
//const int SIZE=10;
void interchange(int &x,int &y){	

x=x ^ y;
y=x ^ y;
x=x ^ y;
	
	
}
//void reversearray(int (*ptoa)[SIZE],const int s){ //pointer to array
void reversearray(int (&arr)[SIZE],const int &s){
	for(int i=0;i<s/2;i++)
		interchange(arr[i],arr[s-i-1]);
}
int main(){
	int a[SIZE],n;
	cout<<"How many values u12 enter in the array:"<<endl;
	cin>>n;
	cout<<"Enter values in the array"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Before reversing array values are:"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	reversearray(a,n);
	cout<<"After reversing array values are:"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	
	return 0;
}
