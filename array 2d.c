#include<stdio.h>
#include<conio.h>
int main (){
	int i,j,arr[3][3];
	printf("Enter element:");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Array[%d][%d]=%d\n",i,j,arr[i][j]);
		}
	}
	
	return 0;
}
