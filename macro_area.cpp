#include<iostream>
//#define AREA(r) 3.1415 * r * r
float area(int x){
	return 3.1415*x*x;
}
using namespace std;
int main(){
	int x=2;
	//float y=AREA(x);
	float y=area(x);
	cout<<y;
}
