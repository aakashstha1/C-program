//WAP in C to find the max and mini element in array

#include<stdio.h>
int main()
{
	int a[100],size,i,max=0,min=a[0];
	printf("Enter the size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Element[%d]:",i);
		scanf("%d",&a[i]);
		
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
	

	}
	printf("Maximum element is %d.\n",max);
	printf("Minimum element is %d.",min);
	return 0;
}
