//WAP to print a unique elements in an array.

#include<stdio.h>
int main()
{
	int a[100],size,i,j,c=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		c=0;
		for(j=0;j<size;j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
				{
					c++;
				}
			}
		}
		if(c==0)
		
		{
			printf("Unique element is: %d\n",a[i]);
		}
	}
	return 0;
}
