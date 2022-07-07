#include<iostream>

inline float area(int x){
	return 3.1415*x*x;
}
using namespace std;
int main(){
	int x=2;
	
	float y=area(x);
	cout<<y;
}
