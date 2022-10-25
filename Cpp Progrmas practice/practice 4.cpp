#include<iostream>
#include<windows.h>
#include<graphics.h>
using namespace std;
void starline();
void work(int ,int);
void starline(char);
int main(){
	int a=6,b=9;
	system("color A3");
	starline();
	wait(5);
	work(a,b);
	draw_circle();
	starline("@");
	return 0;
}
void starline(){
	for(int i=1;i<20;i++)
	cout<<"#";
}
void work(int x,int y){
	cout<<"the multiplication is\t"<<x*y<<endl;
	cout<<"the addition is\t"<<x+y<<endl;
}
void starline(char a){
	for(int j=1;j<30;j++)
	cout<<a;
}








