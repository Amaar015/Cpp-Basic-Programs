#include<iostream>
#include<windows.h>		//For Timing Fuction in HomePage
#include<iomanip>		//For using Manipulaters
#include<fstream>		//For Storing Data in File
#include<conio.h>		//For Hold Function
#include<stdlib.h>	 		//For Setting Color 



using namespace std;
void Icon();
void StartingPage(); 
int main(){
	StartingPage();
	return 0;
	
	
}
	void StartingPage()
	{
	cout<<"\n\n";
//	Icon();
	cout<<"\n\n\n\n\n"<<setw(50)<<"SEARCHING..\n	  \t\t";
	system("Color 71");
	char x=46;//32;
	
	for(int i=0;i<31;i++)
	{
			cout<<x;
			if(i>=0&&i<11)
			Sleep(300);
			if(i>10&&i<24)
			Sleep(150);
			if(i>23&&i<31)
			Sleep(400);
	}
	

}









