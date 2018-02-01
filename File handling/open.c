#include<stdio.h>
void main(){
	/*FILE *p;
	p = fopen("salik.txt","w");
	if(p==NULL){
		printf("File not created!");
	}
	else
	printf("file created");
	*/
	FILE *k;
	k = fopen("salik.txt","r");
	if(k==NULL){
		printf("File not present");
	}
	else
	printf("file present");
	
}
