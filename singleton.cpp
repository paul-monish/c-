#include<iostream>
using namespace std;

class SingleTon{
	int a,b;
	static bool status;
	static SingleTon* single;
	SingleTon(int,int);
	public:
		static SingleTon* makeInstance(int,int);
		void show();
		~SingleTon();
};
bool SingleTon::status=false;
SingleTon* SingleTon::single=NULL;
SingleTon::SingleTon(int x,int y){
	cout<<"constructor called for object="<<this<<endl;
	a=x;b=y;
}
SingleTon* SingleTon::makeInstance(int x,int y){
	if(status==false){
		single=new SingleTon(x,y);
		status=true;
	}
	return single;
}
SingleTon::~SingleTon(){
	cout<<"destructor call for object"<<this<<endl;
	status=false;
}
void SingleTon::show(){
	cout<<"values are: "<<a<<" "<<b<<endl;
}
void test(){
	SingleTon *s1,*s2;
	s1=SingleTon::makeInstance(1,2);
	s1->show();
	delete s1;
	s2=SingleTon::makeInstance(5,6);
	s2->show();
}
int main(){
	test();
	return 0;
}
