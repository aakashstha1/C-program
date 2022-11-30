//WAP in C to copy the element of one array into another array

#include<stdio.h>
int main()
{
	int a1[100],a2[100],size,i;
	printf("Enter size of array:");
	scanf("%d",&size);
		printf("Enter element for a1:\n");
	for(i=0;i<size;i++)
	{
		
		scanf("%d",&a1[i]);
	}
		printf("Enter element for a2:\n");
	for(i=0;i<size;i++)
	{
		
		scanf("%d",&a2[i]);
	}
	printf("Coping a1 to a2...\n");
	printf("Element of a2:\n");
	for(i=0;i<size;i++)
	{
		printf("%d",a1[i]);
		printf("\n");
	
	}
}
