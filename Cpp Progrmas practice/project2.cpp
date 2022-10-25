#include<iostream>
#include<graphics.h>
using namespace std;
int main(){
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\TC\BGI");
	outtext("Amaar raza");
	getch();
	closegraph();




}
