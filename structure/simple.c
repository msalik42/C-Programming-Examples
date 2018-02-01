#include<stdio.h>
void main(){
	struct student{
		char name[20];
		int age;
		int roll;
	};
	struct student salik={
	"salik",
	20,
	145	
	};
	printf("%s %d %d",salik.name,salik.age,salik.roll);
}
