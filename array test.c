//WAP to take elements from user in 3d array also print the elements.
#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k,arr[2][2][2];
	printf("Enter the element:");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			for(k=0; k<2; k++){
			scanf("%d",&arr[i][j][k]);
		}
	}
}
for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			for(k=0; k<2; k++){
			printf("Array[%d][%d][%d]=%d\n",i,j,k,arr[i][j][k]);
		}
	}
}
	return 0;
}
