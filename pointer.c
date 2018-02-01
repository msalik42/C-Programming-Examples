#include<stdio.h>
void main() {
	int a = 10;
	int *p;
	p = &a;
	int **l;
	l = &p;
	printf("value of a is 		: %d\n",a);
	printf("address of a is		: %u\n",&a);
	printf("value of p is 		: %u\n",p);
	printf("address of p is 	: %u\n",&p);
	printf("value of l is 		: %u\n",l);
	printf("address of l is 	: %u\n",&l);
	printf("value of 'p' by 'l' is %u\n",*l);
	printf("value of 'a' by 'p' is %d\n",*p);
	printf("value of 'a' by 'l' is %u\n",**l);
	
	
}
