#include<stdio.h>
int main()
{
	int a;
	printf("What is the capital city of Indonesia?\n1.Delhi\t\t2.Jakarta\n3.Paris\t\t4.Kathmandu\n\n");
	
	printf("Enter your option :\n");
	scanf("%d",&a);
	
	switch(a){
	{
		case 1:
			printf("You are incorrect.");
			break;
	}
	
	{
		case 2:
			printf("You are correct.");
			break;
	}
	
	{
		case 3:
			printf("You are incorrect.");
			break;
	}
	
	{
		case 4:
			printf("You are incorrect.");
			break;
	}
	
	{
		default:
			printf("Your option is not valid.");
	}
}
return 0;
}
