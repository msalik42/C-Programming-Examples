#include<stdio.h>
void main(){
	FILE *p;
	p = fopen("salik.txt","w");
	char text[50];
	printf("Enter the text");
	gets(text);
	int length = strlen(text);
	int counter;
	if(p==NULL){
		printf("File not created");
	}
	else{
		for(counter = 0;counter<length; counter++){
			fputc(text[counter],p);
		}
		printf("data successfully writen.");
	}
	fclose(p);
}
