#include<iostream>
using namespace std;

class Fraction{
	int num,denom;
	public:
		Fraction(int=0,int=1);
		friend bool operator==(const Fraction&,const Fraction&);
		friend bool operator>(const Fraction&,const Fraction&);
		friend istream& operator>>(istream&,Fraction&);
		friend ostream& operator<<(ostream&,const Fraction&);
		Fraction& operator=(const Fraction&);
		Fraction& operator++();//pre-increment
		Fraction operator++(int);//post-increment
		~Fraction();
};
Fraction::Fraction(int n,int d){
	cout<<"constructor called for object"<<this<<endl;
	num=n;
	denom=d;
}
bool operator==(const Fraction& o1,const Fraction &o2){
	cout<<"operator()== called for object"<<endl;
	if(o1.num*o2.denom==o1.denom*o2.num)
		return true;
	else
		return false;
}
bool operator>(const Fraction& o1,const Fraction &o2){
	cout<<"operator()> called for object"<<endl;
	if(o1.num*o2.denom>o1.denom*o2.num)
		return true;
	else
		return false;
}
Fraction& Fraction::operator=(const Fraction&obj){
	cout<<"operator=() call for object="<<this<<endl;
	if(this!=&obj){
		this->num=obj.num;
		denom=obj.denom;
	}
	return (*this);
}
Fraction::~Fraction(){
	cout<<"destrutor called for object="<<this<<endl;
}
Fraction& Fraction::operator++(){
	cout<<"pre-increment overload for object"<<this<<endl;
	num=num+denom;
	return *this;
}
Fraction Fraction::operator++(int n){
	cout<<"post-increment overload for object"<<this<<endl;
	Fraction temp;
	temp=*this;
	num=num+denom;
	return temp;
}

istream& operator>>(istream& din,Fraction &o){
	cout<<"operator>> call for object"<<endl;
	cout<<"Enter numerator and denomenator values:"<<endl;
	din>>o.num>>o.denom;
	return din;
}
ostream& operator<<(ostream& dout,const Fraction &o){
	cout<<"operator<< call for object"<<endl;
	dout<<o.num<<"/"<<o.denom;
	return dout;
}
int main(){
	Fraction f1(4),f2(4),f3(5,2);
	if(f1==f2)
		cout<<endl<<"f1 and f2 are equal"<<endl;
	else if(f1>f2)
		cout<<endl<<"f1 is greater than f2"<<endl;
	else
		cout<<endl<<"f1 is less than f2"<<endl;
	cin>>f1;
	f2=f1++;
	f3=++f1;
	cout<<endl<<f2<<endl;
	cout<<endl<<f3<<endl;
	return 0;
}
