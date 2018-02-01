#include<stdio.h>
#include<stdlib.h>
void main(){
	int *p;
	p = malloc(4);
	if(p==NULL){
		printf("memory not allocated");
	}
	else{
		*p=145;
		printf("% d is from allocated memmory",*p);
	}
	//free(p);	
	if(p!=NULL){
		printf("\nmemory has been free");
	}
	else{
		printf("\nmemoty is not deleted");
	}
	
}
