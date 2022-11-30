#include<stdio.h>
int main()
{
	int a,sum=0;
	for(a=0;a<10;a++){
		if(a%2==0)
		continue;
		sum=sum+a;
	}
	printf("sum=%d",sum);
	
	return 0;
}
