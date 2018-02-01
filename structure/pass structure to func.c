#include<stdio.h>
struct student{
		char name[30];
		int roll;
	};
void main(){
	
//void display(char [],int);
//void show(struct student);
	
	struct student salik={
		"salik",
		145
	};
	display(salik.name,salik.roll);
	show(salik);	
	
}
display(char n[],int a){
	printf("Into the display function");
	printf("Name: %s Roll: %d\n",n,a);
}
show(struct student salik){
	printf("Into the show function");
	printf("Name: %s Roll: %d\n",salik.name,salik.roll);
	
}
