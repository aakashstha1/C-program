#include<stdio.h>
int main(){
	int i;
	
	for(i = 5; i <= 5; i ++ ) // for loop
	{
     		printf("Value of i: %d \n\n", i);
   	}
   	
   	
	int a = 9;   // while loop execution
  	do {
		printf("Value of a: %d\n",  a);
      		a++;
   	} while(a < 10);
	printf("\n");
	
	int b = 19;   // while loop execution
   	while(b< 20) 
	{
		printf("Value of b: %d\n",  b);
      		b++;
	}
	printf("\n");
	
	if(a>b)
	{
		printf("'a' is greater.");
	}else{
		printf("'b' is grater");
	}	
	
	
	return 0;
}
