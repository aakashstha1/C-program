//WAP to calulate n factorial
#include<stdio.h>
int main()
{
	int n,i;
	unsigned long long fac=1;
	printf("Enter a num:");
	scanf("%d",&n);
	if(n<0){
		printf("Error!");
	}else{
		for(i=1;i<=n;i++){
			fac*=i;
		}
		printf("Factorial of %d is %llu.",n,fac);
	}
	return 0;
}
