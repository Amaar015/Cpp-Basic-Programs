#include<iostream>
#include<graphics.h>
using namespace std;
int main(){
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"E:/Amaar/BGI"w);
	outtext("Amaar raza");
	getch();
	closegraph();
}
