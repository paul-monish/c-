#include<iostream>
using namespace std;
class Complex{
	int real,img;
	public:
		Complex(int=1,int=0);//int=1,int(not possible)====int,int=0(possible)//r-->l
		Complex(const Complex&);
		Complex& operator=(const Complex&);
		void showNumber();
		~Complex();
		friend void fn(Complex&);
		friend Complex operator+(const Complex&,const Complex&);
};
Complex::Complex(int r,int i){
	cout<<"parameterize constructor call for object="<<this<<endl;
	real=r;img=i;
}
Complex::Complex(const Complex& obj){
	cout<<"copy constructor call for object="<<this<<endl;
	real=obj.real;
	img=obj.img;
}
Complex::~Complex(){
	cout<<"destructor call for object="<<this<<endl;
}
Complex& Complex::operator=(const Complex&obj){
	cout<<"operator=() call for object="<<this<<endl;
	if(this!=&obj){
		this->real=obj.real;
		this->img=obj.img;
	}
	return (*this);
}

void Complex::showNumber(){
	cout<<"shownumber() call for object="<<this<<endl;
	cout<<real<<"+i"<<img<<endl;

}
void fn(Complex &obj){
	obj.real=obj.real+5;
	obj.img=obj.img+6;
}
//this hold address of calling object
Complex operator+(const Complex& o1,const Complex& o2){
	cout<<"operator+() called for object"<<endl;
	Complex temp;
	temp.real=o1.real+o2.real;
	temp.img=o1.img+o2.img;
	return temp;
}
int main(){
	Complex c1,c2(4),c3(3,2),c4=8;
	Complex c5=c3;
	//fn(c1);
	//c1.showNumber();
	c1=(c2=c4)=c5;
	//fn(c1);
	c1=2+c5;//operator+(2,c5);
	c1.showNumber();
	return 0;
}
