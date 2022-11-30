//WAP using strings
#include<stdio.h>
#include<strings.h>
int main(){
	char a[25];
	char b[25];
	printf("Enter 1st word:");
	scanf("%s",&a);
	printf("Enter 2nd word :");
	scanf("%s",&b);
		printf("\n\nComparing string:\n");
	int res=strcmp(a,b);
	printf("%d",res);
	
	printf("\n\njoining strings:\n");
	strcat(a,b);
	puts(a);
	
	printf("\n\n");
	printf("copying string:\n");
	strcpy(a,b);
	puts(a);
	
	printf("\n\nReversing string:\n");
	strrev(a);
	puts(a);
	
	
	
	return 0;
}
