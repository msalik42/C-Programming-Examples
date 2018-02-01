#include<stdio.h>
#include<conio.h>
void main(){
	int i;
	for(i=0;i<10;i++){
		char txt[10]=".txt",mp4[10]=".mp4";
		char i[1]="i";
		char br[20]=strcat(i,txt);
		char ar[20]=strcat(i,mp4);
		rename(br,ar);
	}
}
