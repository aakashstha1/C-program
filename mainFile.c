#include<stdio.h>
#include "add.c"
int main()
{
	int a=10,b = 5,total;
	total = sum(a,b);
	printf("the sum is: %d\n", total);
	display();
	printf("hello how are you?");
	return 0;
}
