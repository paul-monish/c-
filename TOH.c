#include<stdio.h>
void TOH(int n,char src,char aux,char des){
	static int i=1;
	if(n>0){
		TOH(n-1,src,des,aux);
		printf("\n%d  %c->%c",i++,src,des);
		TOH(n-1,aux,src,des);
	}
}

int main(){
	int i,n;
	printf("Enter number of disk:\n");
	scanf("%d",&n);
	TOH(n,'a','b','c');
	return 0;
}
