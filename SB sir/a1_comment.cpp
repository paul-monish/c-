#include<iostream>
using namespace std;

void interchange(int& x, int* y) // x is a reference or alias of variable a located at the same momory location
{
	x  = x ^ *y;	//xor operator is used instead of any arithmatic operator
	*y =  x ^ *y;
	x = x ^ *y;
}

int main()
{
	int a,b;
	
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	
	cout<<"Before swapping elements are:"<<endl;
	cout<<a <<" "<<b<<endl;
	
interchange(a, &b);     
//1st argument is passed using call-by-reference and 2nd argument is using  call-by-address. 
//Both are advantageous w.r.t. call-by-value in that sense that original variables' location 
//are accessed through reference or pointer respectively but in pass-by-reference, 
//additionally, no extra space is required because it doesn't need additional space for 
//pointer variable.
	
	cout<<"After swapping elements are: "<<endl;
	cout<<a <<" "<<b<<endl;	
	return 0;
}


