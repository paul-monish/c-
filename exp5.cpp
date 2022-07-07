#include<iostream>
using namespace std;

class Rectangle{
	private:
		int l,b;
	public:
		void input(){
			cout<<"Enter Length of Rectangle:";
			cin>>l;
			cout<<"Enter Breath of Rectangle:";
			cin>>b;
		}
		int area();
};

int Rectangle::area(){
	int a=l*b;
	return a;
}
int main(){
	Rectangle r;
	r.input();
	int a=r.area();
	cout<<"Area of Rectangle= "<<a;
	return 0;
}








