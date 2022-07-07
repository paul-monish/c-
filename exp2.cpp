#include<iostream>
using namespace std;
#define SIZE 5//handle by prepossesor
//const int SIZE=10//handle by compiler
void interchange(int &x,int &y){
	x=x^y;
	y=x^y;
	x=x^y;
}
void reverseArray(int (&ptoa)[SIZE],const int n){
	for(int i=0;i<n/2;i++)
		interchange(ptoa[i],ptoa[n-i-1]);
}
int main(){
	int a[SIZE],n;
	cout<<"Enter Size of Array:"<<endl;
	cin>>n;
	cout<<"Enter Array Element:"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Before Reversing The Array:"<<endl;
	for(int i=0;i<n;i++)
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	reverseArray(a,n);
	cout<<"After Reversing The Array:"<<endl;
	for(int i=0;i<n;i++)
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	return 0;
}
