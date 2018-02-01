#include<stdio.h>
void main(){
	if(remove("ansari.txt")==0){
		printf("File deleted");
	}
	else{
		printf("File not present");
	}
}
