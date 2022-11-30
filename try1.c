#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int box[n];
	printf("Enter any number:\n");
	for( i=0;i<n;i++)
	{
		scanf("%d",&box[i]);
	}
	for(i=1;i<n;++i)
	{
		if(box[0]<box[i])
		{
			box[0]=box[i];
		}
	}
	printf("largest element is %d",box[0]);
	return 0;
}
