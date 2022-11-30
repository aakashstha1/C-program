//WAP to read n number of values in an array and display in reverse order.
#include<stdio.h>
#include<conio.h>
int main(){
int size,i,arr[5];
printf("Enter the size of array: ");
scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter the array element[%d]:",i);
		scanf("%d",&arr[i]);
	}
     for (i=size-1;i>=0;--i){
     	printf("Element are[%d]:%d\n",i,arr[i]);
	}
return 0;	
}
