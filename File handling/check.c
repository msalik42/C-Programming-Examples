#include<stdio.h>
void main()
{
	struct student{
		char name[20];
		int roll;
		int age;
	};
	struct student salik={"salik", 145, 20};
	printf("%s %d  %d",salik.name,salik.age, salik.roll);
}
