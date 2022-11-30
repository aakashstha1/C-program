/*

*/
#include<stdio.h>
int main(){
	int arr[100],i,size,sum=0,average;
	printf("size=");
	scanf("%d",&size);
	printf("Enter elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i=0;i<size;i++)
	{
		sum+=arr[i];
	
		
	}
	printf("sum=%d\n",sum);
	average=sum/size;
	
	printf("Average=%d",average);
	
	return 0;
}

