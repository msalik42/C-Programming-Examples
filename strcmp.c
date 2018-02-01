#include<stdio.h>
void main(){
	char name[10]="salik";
	char l[10]="salik";
	if(strcmp(name,l)==0){
		printf("string matched");
	}
	else{
		printf("string not matched");
	}
}
