#include<iostream>
#include<graphics.h>
using namespace std;
int main(){
	int gdriver=DETECT,gmode;
	  initgraph(&gdriver,&gmode,"C:\TC\BGI");
			setcolor(GREEN);
	outtext("Amaar Raza");
	getch();
	closegraph();
}
