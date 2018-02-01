#include<stdio.h>
#define check(number) if(number>10)	\
	printf("Number is greater than 10");	\
	else \
	printf("Number is less than 10");
void main(){
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	check(20);
}
