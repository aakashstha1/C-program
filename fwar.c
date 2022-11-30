#include<stdio.h>
int fun(int x,int y);

int main(){
	int a,b,sum;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a number:");
	scanf("%d",&b);
	sum=fun(a,b);
	printf("The sum is %d",sum);
	return 0;
}
int fun(int x,int y){
	int res=x+y;
	return res;
}
