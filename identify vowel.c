//WAP to identify vowel sound
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an alphabet:");
	scanf("%c",&ch);
	if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'
	||ch=='O'||ch=='o'||ch=='U'||ch=='u'){
		printf("%c is vowel.",ch);
	}else{
		printf("%c is consonant.",ch);
	}
	return 0;
}
