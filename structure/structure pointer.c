#include<stdio.h>
void main(){
	struct student{
		char name[30];
		int age;
		int roll;
	};
	struct student salik={
		"salik",
		20,
		145
	};
	struct student *p;
	p = &salik;
	printf("Name: %s\nRoll: %d\nAge: %d",p->name,p->roll,p->age);
}
