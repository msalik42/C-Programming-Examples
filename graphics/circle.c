#include<graphics.h>
#include<conio.h>
main(){
	int gd=0,gm;
	initgraph(&gd,&gm," ");
	circle(100,100,100);
	getch();
	closegraph();
}
