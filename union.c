#include<stdio.h>
void main(){
	union student{
		char name[20];
		int roll;
	};	
	union student var;
	strcpy(var.name,"salik");
	printf("Name is: %s",var.name);
	var.roll=145;
	printf("\nAnd roll: %d",var.roll);
	printf("\nsize of var is: %d",sizeof var);
}
