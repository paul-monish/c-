#include<iostream>

using namespace std;
#define N 100
//const int N=100;

void interchange(int&x,int&y)
{
	x=x^y;
	y=x^y;
	x=x^y;
}

void ReverseArray(int (&arr)[N],const int& size)
{
	/*int i, t, len = size-1;
	for (i=0; i<=len/2; i++)
	{
		if(arr[i] != arr[len-i]) {
			t = arr[i];
			arr[i] = arr[len-i];
			arr[len-i] = t;
		}
	}*/
	for(int i=0;i<size/2;i++)
		interchange(arr[i],arr[size-i-1]);
}


//While passing reference to an array, it is required to enclose the reference variable within 
//parenthesis because if it is omitted then, as subscript operator [ ] has higher precedence over 
//ampersand operator &, it will make sense that it is an array of references while in actual it is 
//required to have a reference to an array. const is used not to modify the argument in any way.

int main()
{
	int a[N],n,i;
	
	cout<<"Enter number of elements:"<<endl;
	cin>>n;
	
	cout<<"Enter array elements:"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	
	cout<<"Before reversing array elements are:"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	ReverseArray(a,n);
	
	cout<<"After reversing array elements are:"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	return 0;
}
