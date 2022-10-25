#include<iostream>
#include<windows.h>
using namespace std;
void toolmotor( );
void toolrikshaw (); 
void toolcars();
void toolven(); 
void toolminibus();
void toolbus();
void tooltruck();
void tooltraller(); 
void toolg_vihicle();
int main()
{
	int a;
	system ("color 1E");
	cout<<"*********Enter your Choice*********\t\t\n";
	cout<<" 1: Bicycle\n";
	cout<<" 2: Auto Rikshaw\n";
	cout<<" 3: Car\n";
	cout<<" 4: Ven\n";
	cout<<" 5: Mini-Buss\n";
	cout<<" 6: Buss\n";
	cout<<" 7: Truck\n";
	cout<<" 8: Traller\n";
	cout<<" 9: Government Vehicle\n";
	cout<<" 0: Exit\n";
	cout<<"\t\t\t\tEnter here:\t";
	cin>>a;
	switch(a){
		case 1:{
			system("cls");
			toolmotor();
			break;
		}
		case 2:{
			system("cls");
			toolrikshaw ();
			break;
		}
		case 3:{system("cls");
			toolcars();
		break;
		}
		case 4:{system("cls");
			toolven();
			break;
		}
		case 5:{system("cls");
			toolminibus();
			break;
		}
		case 6:{system("cls");
			toolbus();
			break;
		}
		case 7:{system("cls");
			tooltruck();
			break;
		}
		case 8:{system("cls");
			tooltraller();
			break;
		}
		case 9:{system("cls");
			toolg_vihicle();
			break;
		}
		case 0:{
			system("cls");
			break;
		}
	}
	return 0;
}
void toolmotor(){
	string a="Bicycle";
	int b,c;
	char ch;
	string date;
		cout<<"*********Bicycle*********"<<endl;
//cout<<"Enter the Vehicle name ";cin>>a;
	cout<<"Enter date(yyyy//mm//dd) ";cin>>date;
cout<<"\nEnter the tool tax in Rupees ";cin>>c;
	cout<<"\nEnter the Allow To Vehicle in km ";cin>>b;
  system("cls");
	cout<<"\nwelcome \n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"\nThe date is "<<date;
	cout<<"\nTool tax ="<<c;
	cout<<"\nAllowed for "<<b<<"km\n";
	cout<<"Recipt use for the date"<<date;
	cout<<"\nGo"<<"\n"<<"Thank You for pay the Tool Plaza Tax\n";
cout<<"Press E or e for go to Exit \n Press M or m for go to Main";
cin>>ch;
if(ch=='E'||ch=='e')
{
	cout<<endl;
}
else if(ch=='m'||ch=='M')
{cout<<endl;
system("cls");
main();
}
}
void toolrikshaw (){
	string a="Auto Rickshaw";
	int b,c;
	char ch;
	string date;
		cout<<"*********Auto Rickshaw*********"<<endl;
//cout<<"Enter the Vehicle name ";cin>>a;
	cout<<"Enter date(yyyy//mm//dd) ";cin>>date;
cout<<"\nEnter the tool tax in Rupees ";cin>>c;
	cout<<"\nEnter the Allow To Vehicle in km ";cin>>b;
	system("cls");
	cout<<"\nwelcome \n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"\n The date is "<<date;
	cout<<"\nTool tax ="<<c;
	cout<<"\nAllowed for "<<b<<"km\n";
	cout<<"Recipt use for the date"<<date;
	cout<<"\nGo"<<"\n"<<"Thank You for pay the Tool Plaza Tax\n";
 cout<<"Press E or e for go to Exit \n Press M or m for go to Main";
cin>>ch;
if(ch=='E'||ch=='e')
{
	cout<<endl;
}
else if(ch=='m'||ch=='M')
{cout<<endl;
system("cls");
main();
}

}
void toolcars(){
	string a="Car";
	int b,c;
	char ch;
	string date;
		cout<<"*********Car*********"<<endl;
//cout<<"Enter the Vehicle name ";cin>>a;
	cout<<"Enter date(yyyy//mm//dd) ";cin>>date;
cout<<"\nEnter the tool tax in Rupees ";cin>>c;
	cout<<"\nEnter the Allow To Vehicle in km ";cin>>b;
system("cls");
	cout<<"\nwelcome \n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"\n The date is "<<date;
	cout<<"\nTool tax =\n"<<c;
	cout<<"\nAllowed for "<<b<<"km\n";
	cout<<"Recipt use for the date"<<date;
	cout<<"\nGo"<<"\n"<<"Thank You for pay the Tool Plaza Tax\n";
cout<<"Press E or e for go to Exit \n Press M or m for go to Main";
cin>>ch;
if(ch=='E'||ch=='e')
{
	cout<<endl;
}
else if(ch=='m'||ch=='M')
{cout<<endl;
system("cls");
main();
}

}
void toolven(){
	string a="Ven";
	int b,c;
	string date;
	char ch;
		cout<<"*********Ven*********"<<endl;
//cout<<"Enter the Vehicle name ";cin>>a;
	cout<<"Enter date(yyyy//mm//dd) ";cin>>date;
cout<<"\nEnter the tool tax in Rupees ";cin>>c;
	cout<<"\nEnter the Allow To Vehicle in km ";cin>>b;
system("cls");
	cout<<"\nwelcome \n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"\n The date is "<<date;
	cout<<"\nTool tax ="<<c;
	cout<<"\nAllowed for "<<b<<"km\n";
	cout<<"Recipt use for the date"<<date;
	cout<<"\nGo"<<"\n"<<"Thank You for pay the Tool Plaza Tax\n";
cout<<"Press E or e for go to Exit \n Press M or m for go to Main";
cin>>ch;
if(ch=='E'||ch=='e')
{
	cout<<endl;
}
else if(ch=='m'||ch=='M')
{cout<<endl;
system("cls");
main();
}
	
}
void toolminibus(){
	string a="Mini Bus";
	int b,c;
	char ch;
	string date;
		cout<<"*********Mini Bus*********"<<endl;
//cout<<"Enter the Vehicle name ";cin>>a;
	cout<<"Enter date(yyyy//mm//dd) ";cin>>date;
cout<<"\nEnter the tool tax in Rupees ";cin>>c;
	cout<<"\nEnter the Allow To Vehicle in km ";cin>>b;
system("cls");
	cout<<"\nwelcome \n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"\n The date is "<<date;
	cout<<"\nTool tax ="<<c;
	cout<<"\nAllowed for "<<b<<"km\n";
	cout<<"Recipt use for the date"<<date;
	cout<<"\nGo"<<"\n"<<"Thank You for pay the Tool Plaza Tax\n";
cout<<"Press E or e for go to Exit \n Press M or m for go to Main";
cin>>ch;
if(ch=='E'||ch=='e')
{
	cout<<endl;
}
else if(ch=='m'||ch=='M')
{cout<<endl;
system("cls");
main();
}
	
}
void toolbus(){
	string a="Bus";
	int b,c;
	char ch;
	string date;
		cout<<"*********Bus*********"<<endl;
//cout<<"Enter the Vehicle name ";cin>>a;
	cout<<"Enter date(yyyy//mm//dd) ";cin>>date;
cout<<"\nEnter the tool tax in Rupees ";cin>>c;
	cout<<"\nEnter the Allow To Vehicle in km ";cin>>b;
system("cls");
	cout<<"\nwelcome \n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"\nThe date is "<<date;
	cout<<"\nTool tax ="<<c;
	cout<<"\nAllowed for "<<b<<"km";
	cout<<"\nRecipt use for the date"<<date;
	cout<<"\nGo"<<"\n"<<"Thank You for pay the Tool Plaza Tax\n";
cout<<"Press E or e for go to Exit \n Press M or m for go to Main";
cin>>ch;
if(ch=='E'||ch=='e')
{
	cout<<endl;
}
else if(ch=='m'||ch=='M')
{cout<<endl;
system("cls");
main();
}
	
}
void tooltruck(){
	string a="Truck";
	int b,c;
	char ch;
	string date;
		cout<<"*********Truck*********"<<endl;
//cout<<"Enter the Vehicle name ";cin>>a;
	cout<<"Enter date(yyyy//mm//dd) ";cin>>date;
cout<<"\nEnter the tool tax in Rupees ";cin>>c;
	cout<<"\nEnter the Allow To Vehicle in km ";cin>>b;
system("cls");
	cout<<"\nwelcome \n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"\n The date is "<<date;
	cout<<"\nTool tax ="<<c;
	cout<<"\nAllowed for "<<b<<"km";
	cout<<"\nRecipt use for the date"<<date;
	cout<<"\nGo"<<"\n"<<"Thank You for pay the Tool Plaza Tax\n";
cout<<"Press E or e for go to Exit \n Press M or m for go to Main";
cin>>ch;
if(ch=='E'||ch=='e')
{
	cout<<endl;
}
else if(ch=='m'||ch=='M')
{cout<<endl;
system("cls");
main();
}
	
}
void tooltraller(){
	string a="Traller";
	int b,c;
	char ch;
	string date;
		cout<<"*********Traller*********"<<endl;
//cout<<"Enter the Vehicle name ";cin>>a;
	cout<<"Enter date(yyyy//mm//dd) ";cin>>date;
cout<<"\nEnter the tool tax in Rupees ";cin>>c;
	cout<<"\nEnter the Allow To Vehicle in km ";cin>>b;
system("cls");
	cout<<"\nwelcome \n";
	cout<<"the vihicle is\t"<<a<<endl;
	cout<<"\n The date is "<<date;
	cout<<"\nTool tax ="<<c;
	cout<<"\nAllowed for "<<b<<"km";
	cout<<"\nRecipt use for the date"<<date;
	cout<<"\nGo"<<"\n"<<"Thank You for pay the Tool Plaza Tax\n";
cout<<"Press E or e for go to Exit \n Press M or m for go to Main";
cin>>ch;
if(ch=='E'||ch=='e')
{
	cout<<endl;
}
else if(ch=='m'||ch=='M')
{cout<<endl;
system("cls");
main();
}
	
}
void toolg_vihicle(){
	string a="Government Vehicle";
	int b,c;
	char ch;
	string date;
		cout<<"*********Government Vehicle*********"<<endl;
//cout<<"Enter the Vehicle name ";cin>>a;
	cout<<"Enter date(yyyy//mm//dd) ";cin>>date;
cout<<"\nEnter the tool tax in Rupees ";cin>>c;
	cout<<"\nEnter the Allow To Vehicle in km ";cin>>b;
	
	system("cls");
	cout<<"\nwelcome \n";
	cout<<"the vihicle is\t"<<a<<endl;
	cout<<"\n The date is "<<date;
	cout<<"\nTool tax ="<<c;
	cout<<"\nAllowed for "<<b<<"km";
	cout<<"\nRecipt use for the date"<<date;
	cout<<"\nGo"<<"\n"<<"Thank You\n";
cout<<"Press E or e for go to Exit \n Press M or m for go to Main";
cin>>ch;
if(ch=='E'||ch=='e')
{
	cout<<endl;
}
else if(ch=='m'||ch=='M')
{cout<<endl;
system("cls");
main();
}
	
}
