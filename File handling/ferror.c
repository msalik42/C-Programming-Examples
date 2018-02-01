#include<stdio.h>
void main(){
	FILE *p;
	char data[30]="salik ansari";
	p = fopen("salik.txt","r");
	if(p != NULL){
		int status;
		fprintf(p,"%s",data);
		status = ferror(p);
		if(status==0){
			printf("writing performed");
		}
		else{
			printf("no permission for writing");
		}
		
	}
	else{
		printf("file not found");
	}
}
