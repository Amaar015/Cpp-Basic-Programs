#include<iostream>
using namespace std;
void repchar();
void repchar(char);
void rechar (char,double);
int main(){
	double b;
	cout<<"enter the number\t";
	cin>>b;
	repchar();
	cout<<endl;
    repchar('$');
    cout<<endl;
    repchar('&');
	return 0;
}
void repchar(){
	char a;
	for(int i=1;i<15;i++)
	cout<<"*";
}
void repchar(char a){
	for(int i=1;i<30;i++)
	cout<<a;}
void repchar(char a,double b)
{
 cout<<" "<<b;
}

