/*
continue statements
	The continue statement skips the current iteration of the loop
	and continue with the next iteration.
*/
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=0;i<5;i++){
		printf("i=%d,j=",i);
		
		for(j=0;j<5;j++){
			if(j==2)
			continue;
			printf("\t%d\t",j);
		}
		printf("\n");
	}
	
	return 0;
}
