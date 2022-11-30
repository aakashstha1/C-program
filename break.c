/*Break Statement:
This statement terminates the smallest enclosing loop(i.e. while,do-while,for loop,or switch statement).
The break statement ends the loop immediately when it encountered.
*/

#include<stdio.h>

int main()
{
	int i,j;
	//Iterate a loop over the range [0,5]
	for(i=0; i<5; i++){
		printf("i=%d,j=",i);
	
	
	for( j=0;j<5;j++){
		if(j==2)
		break;
		printf("%d",j);
	}
	printf("\n");
}
	
	return 0;
}
