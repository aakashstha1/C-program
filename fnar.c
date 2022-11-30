#include<stdio.h>
void fun();

int main(){
	int a,b,sum;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a number:");
	scanf("%d",&b);
	fun(a,b);
	
	return 0;
}
void fun(int x,int y){
	int res=x+y;
	printf("The sum is %d",res);

}
