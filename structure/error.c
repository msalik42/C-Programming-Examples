#include<stdio.h>
void main(){
	struct roll{
		char name[20];
		int age;
	};
	int len = 3;
	struct roll s[len];
	int i,j;
	for(i=0;i<len;i++){
		printf("enter the name and age of roll[%d]",i+1);
		scanf("%s %d",s[i].name,&s[i].age);
	}
	for(j=0;j<len;j++){
		printf("%s is %d year old\n",s[i].name[i],s[i].age);
		
	}
}
