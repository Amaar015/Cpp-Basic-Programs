#include<iostream>
#include<windows.h>
using namespace std;
void toolmotor( );
void toolrikshaw (string&); 
void toolcars(string&);
void toolven(string&); 
void toolminibus(string&);
void toolbus(string&);
void tooltruck(string&);
void tooltraller(string&); 
void toolg_vihicle(string&);
int main()
{
	int a;
	system ("color 1F");
	cout<<"*********Enter your Choice*********\t\t";
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
	cin>>a;
	switch(a){
		case 1:{
			toolmotor();
		//	break;
		}
	}
	return 0;
}
void toolmotor(){
	string a="*********Bicycle*********";
	int b,c;
	string date;
cout<<"Enter the Vehicle name ";cin>>a;
	cout<<"Enter date ";cin>>date;
cout<<"Enter the tool tax in Rupees ";cin>>c;
	cout<<"Enter the Allow To Vehicle in km ";cin>>b;
	cout<<"welcome \n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<" The date is "<<date;
	cout<<"Tool tax =\n"<<c;
	cout<<"Allowed for "<<b<<"km\n";
	cout<<"Recipt use for the date\n"<<date;
	cout<<"Go"<<"\n"<<"Thank You for pay the Tool Plasa Tax\n";
}
/*void toolrikshaw(string& a){
	cout<<"welcome \n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"tax =100\n";
	cout<<"Allowed for 200 km\n";
	cout<<"Recipt use for Today\n";
	cout<<"Go"<<"\n"<<"Thank You \n";
}
void toolcars(string& a){
	cout<<"welcome \n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"tax =150\n";
	cout<<"Allowed for 200 km\n";
	cout<<"Recipt use for Today\n";
	cout<<"Go"<<"\n"<<"Thank You \n";
}
void toolven(string& a){
	cout<<"welcome \n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"tax =200\n";
	cout<<"Allowed for 200 km\n";
	cout<<"Recipt use for Today\n";
	cout<<"Go"<<"\n"<<"Thank You\n ";
}
void toolminibus(string& a){
	cout<<"welcome \n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"tax =250\n";
	cout<<"Allowed for 200 km\n";
	cout<<"Recipt use for Today\n";
	cout<<"Go"<<"\n"<<"Thank You\n ";
}
void toolbus(string& a){
	cout<<"welcome \n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"tax =300\n";
	cout<<"Allowed for 200 km\n";
	cout<<"Recipt use for Today\n";
	cout<<"Go"<<"\n"<<"Thank You \n";
}
void tooltruck(string& a){
	cout<<"welcome \n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"tax =400\n";
	cout<<"Allowed for 200 km\n";
	cout<<"Recipt use for Today\n";
	cout<<"Go"<<"\n"<<"Thank You \n";
}
void tooltraller(string& a){
	cout<<"well come\n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"tax =500\n";
	cout<<"Allowed for 200 km\n";
	cout<<"Recipt use for Today\n";
	cout<<"Go"<<"\n"<<"Thank You\n ";

}
void toolg_vihicle(string& a){
	cout<<"well come\n";
	cout<<"the vihicle is\t\t"<<a<<endl;
	cout<<"tax =0000\n";
	cout<<"Allowed for 200 km\n";
	cout<<"Recipt use for Today\n";
	cout<<"Go"<<"\n"<<"Thank You\n ";
}*/
