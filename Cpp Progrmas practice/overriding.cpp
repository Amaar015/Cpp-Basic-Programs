#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
   {
    int x;
	int num;
cout<<"enter a number\n";
cin>>num;
cout<<endl;
for(x=1; x<=200;x++)
cout<<setw(6)<<num*x<<"\t";
 int y=num*x;
if(x%10==0)
/*
else*/
cout<<endl;
return 0;      
   }
       



