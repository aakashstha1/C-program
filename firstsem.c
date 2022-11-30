#include<stdio.h>
#include"addition.c"
#include "sub.hello.cpp"
int main (){
	
	int a=1,b=2,e;
//	e=c(a,b);
	e = sub(b,a);
	printf("%d",e);
	
	
	return 0;
}
