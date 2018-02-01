#include<stdio.h>
#include<conio.h>
#define mark 69
void main(){
#if mark >= 75
	printf("Yor mark is good");
	return 0;
#elif mark >=60
	printf("your mark is average");
#else
	printf("your mark is bad");
#endif
}
