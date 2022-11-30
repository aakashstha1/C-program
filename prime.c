#include<stdio.h>
int main()
{
	int i,n,j,m;
	do
	{
		i=2;
		while(i<=n)
		{
			if(n%i==0)
			{
				break;
			}
			i++;
		}
		if(i==n)
		printf("%d\t",n);
		n++;
	}while(n<=100);
	
	printf("Enter a number:");
	scanf("%d",&m);
	
	for(j=2;j<=m;j++)
	if(m%j==0)
	{
		printf("prime");
		break;
	}else{
		printf("Not prime");
		break;
	}
	return 0;
}
