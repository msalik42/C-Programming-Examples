#include<stdio.h>
void main(){
	if(rename("salik.txt","ansari.txt")==0){
		printf("successfully renamed");
	}
	else{
		printf("File not present");
	}
}
