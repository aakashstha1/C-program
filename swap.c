//WAP to swap two numbers
#include<stdio.h>
int main(){
//	int a,b,c;
//	printf("Enter no for A:");
//	scanf("%d",&a);
//	printf("Enter no for B:");
//	scanf("%d",&b);
//	c=a;
//	a=b;
//	b=c;
//	printf("By swapping we get:\n");
//	printf("A=%d\nB=%d",a,b);
//	
// swap without temporary variable

int x=10,y=20;
printf("Before swap:\nx=%d\ty=%d",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("\nAfter swap:\nx=%d\ty=%d",x,y);

	return 0;
}
