#include<stdio.h>
int c=1;
void main(){
	int i,a,b;
	printf("enter the base value: ");
	scanf("%d",&a);
	printf("\nenter the power value: ");
	scanf("%d ",&b);
	for(i=0;i<b;i++){
		c=a*c;
	}
	printf("%d to the power %d is: %d",a,b,c);
	
}
