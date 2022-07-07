#include<iostream>
#include<stdlib.h>
using namespace std;

class overload{

public: 

	void *operator new(size_t);
	void operator delete(void* ptr); 
};

void *overload::operator new(size_t)
{
	cout<<"memory allocation"<<endl;
	return (int *) malloc(sizeof(int));

}
void overload::operator delete(void* ptr)
{
	cout<<" memory de- allocation"<<endl;
	free(ptr);
}


int main(){


	overload *obj = new overload();
	
	delete obj;
}
