




#include<iostream>                         //header files//
#include<iomanip>                          //header files//
#include<cmath>
#include<windows.h>
#include<conio.h>
#include<string>
#include<fstream>                          //header files//
using namespace std;
void welcome();
void Login();  
void Exit();                             //declears login function
void Register();                            //decleration of Register function 
void Forget();                              //decleration of Forget function
void paybill();                             //decleration of paybill function  
class elctricity_bills{                     //start the class for calculating the bill
	private:
		int no_bulbs,no_fans,no_defrigiretor,no_AC,no_iron,no_tv,no_computer_monitor,no_electric_motor,no_mobile_charger,no_washingMachine,no_laptop,
		no_electric_gizer,no_microwave_oven,no_computer_cpu,no_video_game;
		float watts_bulbs,watts_fans,watts_defrigiretor,watts_AC,watts_iron,watts_tv,watts_computer_monitor,
		watts_electric_motor,watts_mobile_charger,watts_washingMachine,watts_laptop,watts_electric_gizer,
		watts_microwave_oven,watts_computer_cpu,watts_video_game;
		//////////////Enter the apliances use in one day////////////////////////////
		float hor_bulbs,hor_fans,hor_defrigiretor,hor_AC,hor_iron,hor__tv,hor_computer_monitor,
		hor_electric_motor,hor_mobile_charger,hor_washingMachine,hor_laptop,hor_electric_gizer,hor_microwave_oven,hor_computer_cpu,hor_video_game;
	    //////////The energy consumed per day////////////////
	 
 float energy_day;
		int days;
		string namem;
        
		public:
    
		void getproduct(){
			
			  
					 system("color 3E");
					 cout<<"\n\n";
	    cout<<"#############Enter The Electrical devices use in your house#############\n"<<"\n";
					cout<<"Enter number of bulbs in your house:             \t";
	    cin>>no_bulbs;
	    cout<<"\n";
	    cout<<"Enter  number of fans in your house:             \t";
	    cin>>no_fans;
	    cout<<"\n";
	    cout<<"Enter  number of defrigiretor in your house:     \t";
	    cin>>no_defrigiretor;
	    cout<<"\n";
	    cout<<"Enter number of AC in your house:                \t";
	    cin>>no_AC;
	    cout<<"\n";
	    cout<<"Enter  number of iron in your house:             \t";
	    cin>>no_iron;
	    cout<<"\n";
	    cout<<"Enter number of TV in your house:                \t";
	    cin>>no_tv;
	    cout<<"\n";
	    cout<<"Enter number of computer  Monitor in your house: \t";
	    cin>>no_computer_monitor;
	    cout<<"\n";
	    cout<<"Enter number of electric motor in your house:   \t";
	    cin>>no_electric_motor;
	    cout<<"\n";	
	    cout<<"Enter number of Mobile Charger in your house:    \t";
	    cin>>no_mobile_charger;
	    cout<<"\n";
	    cout<<"Enter number of washing Machine in your house:   \t";
	    cin>>no_washingMachine;
	    cout<<"\n";
	    cout<<"Enter the number of laptop in your house:        \t";
	    cin>>no_laptop;
	    cout<<"\n";
	    cout<<"Enter the number of electric Gizer in your house:\t";
	    cin>>no_electric_gizer;
	    cout<<"\n";
	    cout<<"Enter the number of microwave Oven in your house:\t";
	    cin>>no_microwave_oven;
	    cout<<"\n";
	    cout<<"Enter the number of Computer CPU in your house:  \t";
	    cin>>no_computer_cpu;
	    cout<<"\n";
	    cout<<"Enter the number of video game in your house:    \t";
	    cin>>no_video_game;
	    cout<<"\n";
	    system("cls");
	 ///////////////////////////////////////////Enter the wattage of each device consumed//////
	   
	    //////////////////////////////////////hours in day///////////////////////
	      system("color 3E");
	      cout<<"#############The Number OF Hours#############\n"<<"\n\n";
		   cout<<"enter the number of hours bulbs working in day:         \t";
		   cin>>hor_bulbs;
		   cout<<"\n";
	   	cout<<"Enter the number of hours fans working in day:          \t";
		   cin>>hor_fans;
		   cout<<"\n";
		   cout<<"enter the number of hours defrigiretor working in day:  \t";
		   cin>>hor_defrigiretor;
		   cout<<"\n";
		   cout<<"enter the number of hours AC working in day:            \t";
		   cin>>hor_AC;
		   cout<<"\n";
		   cout<<"Enter the number of hours iron working in day:          \t";
     cin>>hor_iron;
     cout<<"\n";
		   cout<<"enter the number of hours tv working in day:            \t";
		   cin>>hor__tv;
		   cout<<"\n";
		   cout<<"enter the number of hours computer monitor working in day:\t";
		   cin>>hor_computer_monitor;
		   cout<<"\n";
		   cout<<"enter the number of hours electric motor working in day:   \t";
		   cin>>hor_electric_motor;
		   cout<<"\n";
		   cout<<"enter the number of hours mobile charger working in day: \t";
		   cin>>hor_mobile_charger;
		   cout<<"\n";
		   cout<<"enter the number of hours washing Machine working in day: \t";
		   cin>>hor_washingMachine;
		   cout<<"\n";
	   	cout<<"enter the number of hours laptop working in day:      \t\t";
		   cin>>hor_laptop;
		   cout<<"\n";
		   cout<<"enter the number of hours electric gizer working in day:\t";
		   cin>>hor_electric_gizer;
		   cout<<"\n";
		   cout<<"enter the number of hours microwave_oven working in day:\t";
	    cin>>hor_microwave_oven;
	    cout<<"\n";
		   cout<<"enter the number of hours computer cpu working in day:\t\t";
		   cin>>hor_computer_cpu;
		   cout<<"\n";
		   cout<<"enter the number of hours video game working in day:  \t\t";
		   cin>>hor_video_game;
		   cout<<"\n";
		   system("cls");
		   system("color 3E");
		   cout<<"#############Days In The Month#############\n"<<"\n\n";;
	    cout<<"the days in the month           \t";
	    cin>>days;
	    cout<<"The name of Month\t";cin>>namem;
		   }
		   void setproduct(float bulb,float fans,float frig,float ac,float iron,float tv,float monitor,
		float motor,float charger,float washer,float laptop,float gizer,float micro,float ccpu,float video){
		watts_bulbs=bulb;watts_fans=fans;watts_defrigiretor=frig;watts_AC=ac;watts_iron=iron;watts_tv=tv;watts_computer_monitor=monitor;
		watts_electric_motor=motor;watts_mobile_charger=charger;watts_washingMachine=washer;watts_laptop=laptop;watts_electric_gizer=gizer,
		watts_microwave_oven=micro;watts_computer_cpu=ccpu;watts_video_game=video;}
		   void showproduct(){
	    
	    cout<<"\n"<<"\n"<<"\n";
		/////////////////////////////////////total Number of devices consumed number of watts//////////////////////////////////////////
     system("cls");
					system("color 3E");
					cout<<"************the number of watts************\t\t"<<endl;
	    cout<<" the watts of Bulbs:           \t"<<watts_bulbs<<endl<<"\n\n";
	    cout<<" the watts of fans:            \t"<<watts_fans<<endl<<"\n\n";
	    cout<<" the watts of defrigiretor:    \t"<<watts_defrigiretor<<endl<<"\n\n";
	    cout<<" the watts of AC:              \t"<<watts_AC<<endl<<"\n\n";
	    cout<<" the watts of Iron:            \t"<<watts_iron<<endl<<"\n\n";
	    cout<<" the watts of tv:              \t"<<watts_tv<<endl<<"\n\n";
	    cout<<" the watts of computer Monitor:\t"<<watts_computer_monitor<<endl<<"\n\n";
	    cout<<" the watts of Electric Motor:  \t"<<watts_electric_motor<<endl<<"\n\n";
	    cout<<" the watts of Mobile Charger:  \t"<<watts_mobile_charger<<endl<<"\n\n";
	    cout<<" the watts of Washing Machine: \t"<<watts_washingMachine<<endl<<"\n\n";
	    cout<<" the watts of laptop:          \t"<<watts_laptop<<endl<<"\n\n";
	    cout<<" the watts of electric_gizer:  \t"<<watts_electric_gizer<<endl<<"\n\n";
	    cout<<" the watts of Microwave Oven:  \t"<<watts_microwave_oven<<endl<<"\n\n";
	    cout<<" the watts of Computer CPU:    \t"<<watts_computer_cpu<<endl<<"\n\n";
	    cout<<" the watts of video game:      \t"<<watts_video_game<<endl<<"\n\n";
				
			
				
				 cout<<"***************total Number of devices consumed number of watts***************\t\n";
		   cout<<"The total Number of watts consumed by bulbs:           \t"<<no_bulbs*watts_bulbs<<endl<<"\n\n";
		   cout<<"The total Number of watts consumed by fans :            \t"<<no_fans*watts_fans<<endl<<"\n\n";	
		   cout<<"The total Number of watts consumed by defrizr :         \t"<<no_defrigiretor*watts_defrigiretor<<endl<<"\n\n";
		   cout<<"The total Number of watts consumed by AC :              \t"<<no_AC*watts_AC<<endl<<"\n\n";
		   cout<<"The total Number of watts consumed by Iron:            \t"<<no_iron*watts_iron<<endl<<"\n\n";
		   cout<<"The total Number of watts consumed by TV :              \t"<<no_tv*watts_tv<<endl<<"\n\n";
		   cout<<"The total Number of watts consumed by computer :        \t"<<no_computer_monitor*watts_computer_monitor<<endl<<"\n\n";
		   cout<<"The total Number of watts consumed by Electrical Motor :\t"<<no_electric_motor*watts_electric_motor<<endl<<"\n\n";
		   cout<<"The total Number of watts consumed by Mobile Charger :  \t"<<no_mobile_charger*watts_mobile_charger<<endl<<"\n\n";
		   cout<<"The total Number of watts consumed by Washing Machine : \t"<<no_washingMachine*watts_washingMachine<<endl<<"\n\n";
		   cout<<"the total Number of watts consumed by laptop:                \t"<<no_laptop*watts_laptop<<endl<<"\n\n";
		   cout<<"The total Number of watts consumed by elctric gizer:         \t"<<no_electric_gizer*watts_electric_gizer<<endl<<"\n\n";
		   cout<<"The Total Number of watts consumed by Microwave Oven:        \t"<<no_microwave_oven*watts_microwave_oven<<endl<<"\n\n";
		   cout<<"The total Number of watts consumed by Computer CPU:          \t"<<no_computer_cpu*watts_computer_cpu<<endl<<"\n\n";
		   cout<<"The total Number of watts consumed by video game:            \t"<<no_video_game*watts_video_game<<endl<<"\n\n";
		   cout<<"\n"<<"\n"<<"\n"<<"\n\n";
		  
     /*Energy consumed by one appliance in one day indidual*/
     cout<<"*****************total energy  consumed by  appliances*****************\t\n";
		   cout<<"The total energy consumed by bulbs:             \t"<<hor_bulbs*(no_bulbs*watts_bulbs)<<endl<<"\n\n";
		   cout<<"The total energy consumed by fans:              \t"<<hor_fans*(no_fans*watts_fans)<<endl<<"\n\n";	
		   cout<<"The total energy consumed by defrizr:           \t"<<hor_defrigiretor*(no_defrigiretor*watts_defrigiretor)<<endl<<"\n\n";
		   cout<<"The total energy consumed by AC:                \t"<<hor_AC*(no_AC*watts_AC)<<endl<<"\n\n";
		   cout<<"The total energy consumed by Iron:              \t"<<hor_iron*(no_iron*watts_iron)<<endl<<"\n\n";
		   cout<<"The total energy consumed by TV:                \t"<<hor__tv*(no_tv*watts_tv)<<endl<<"\n\n";
		   cout<<"The total energy consumed by computer monitor:  \t"<<hor_computer_monitor*(no_computer_monitor*watts_computer_monitor)<<endl<<"\n\n";
		   cout<<"The total energy consumed by Electrical Motor:  \t"<<hor_electric_motor*(no_electric_motor*watts_electric_motor)<<endl<<"\n\n";
		   cout<<"The total energy consumed by Mobile Charger:    \t"<<hor_mobile_charger*(no_mobile_charger*watts_mobile_charger)<<endl<<"\n\n";
		   cout<<"The total energy consumed by Washing   Machine: \t"<<hor_washingMachine*(no_washingMachine*watts_washingMachine)<<endl<<"\n\n";
		   cout<<"the total energy consumed by laptop:            \t"<<hor_laptop*(no_laptop*watts_laptop)<<endl<<"\n\n";
		   cout<<"The total energy consumed by elctric gizer:     \t"<<hor_electric_gizer*(no_electric_gizer*watts_electric_gizer)<<endl<<"\n\n";
		   cout<<"The Total energy consumed by Microwave Oven:    \t"<<hor_microwave_oven*(no_microwave_oven*watts_microwave_oven)<<endl<<"\n\n";
		   cout<<"The total energy consumed by Computer CPU:      \t"<<hor_computer_cpu*(no_computer_cpu*watts_computer_cpu)<<endl<<"\n\n";
		   cout<<"The total  energy consumed by video game:\t"<<hor_video_game*(no_video_game*watts_video_game)<<endl<<"\n\n";	
		   cout<<"\n"<<"\n"<<"\n";
		  		    ////////////////////////////////////////Watts consumed by all appliances in one day/////////////
		  	cout<<"*************Watts consumed by all appliances in one day*************";
		   cout<<"the total energy consumed in a whole day\t"<<(hor_bulbs*(no_bulbs*watts_bulbs))+(hor_fans*(no_fans*watts_fans))+(hor_defrigiretor*(no_defrigiretor*watts_defrigiretor))+
		   (hor_AC*(no_AC*watts_AC))+(hor_iron*(no_iron*watts_iron))+(hor__tv*(no_tv*watts_tv))+(hor_computer_monitor*(no_computer_monitor*watts_computer_monitor))+(hor_laptop*(no_laptop*watts_laptop))
		   +(hor_electric_motor*(no_electric_motor*watts_electric_motor))+(hor_mobile_charger*(no_mobile_charger*watts_mobile_charger))+(hor_washingMachine*(no_washingMachine*watts_washingMachine))+
		   (hor_electric_gizer*(no_electric_gizer*watts_electric_gizer))+(hor_microwave_oven*(no_microwave_oven*watts_microwave_oven))+(hor_computer_cpu*(no_computer_cpu*watts_computer_cpu))+
		   (hor_video_game*(no_video_game*watts_video_game));
		   
			  		
					energy_day=((hor_bulbs*(no_bulbs*watts_bulbs))+(hor_fans*(no_fans*watts_fans))+(hor_defrigiretor*(no_defrigiretor*watts_defrigiretor))+
		   (hor_AC*(no_AC*watts_AC))+(hor_iron*(no_iron*watts_iron))+(hor__tv*(no_tv*watts_tv))+(hor_computer_monitor*(no_computer_monitor*watts_computer_monitor))+(hor_laptop*(no_laptop*watts_laptop))
		   +(hor_electric_motor*(no_electric_motor*watts_electric_motor))+(hor_mobile_charger*(no_mobile_charger*watts_mobile_charger))+(hor_washingMachine*(no_washingMachine*watts_washingMachine))+
		   (hor_electric_gizer*(no_electric_gizer*watts_electric_gizer))+(hor_microwave_oven*(no_microwave_oven*watts_microwave_oven))+(hor_computer_cpu*(no_computer_cpu*watts_computer_cpu))+
		   (hor_video_game*(no_video_game*watts_video_game)));
		   cout<<"\n"<<"\n"<<"\n";
		   //system("color 95");
		   cout<<"*************the units consumed in the month*************\n\n";
		 
		////////////////////the energy cosumed in the month
	   	if(days==28)
    	{
		   cout<<"The energy consumed in month ;\t"<<namem<<" "<<fixed<<energy_day*days;
		   cout<<endl;}
		  if(days==29){
		  	cout<<"The energy consumed in month;\t"<<namem<<" "<<fixed<<energy_day*days;
		   cout<<endl;
			 	}
		   if(days==30){
		  	cout<<"The energy consumed in month:\t"<<namem<<" "<<fixed<<energy_day*days;
		   cout<<endl;
		   }
		   if(days==31){
		   cout<<"The energy consumed in month:\t"<<namem<<" "<<fixed<<energy_day*days;
		   cout<<endl;
	   	}
	    cout<<"*********Converting Kilo*********\n";
	    cout<<"convert into kilo\t"<<energy_day*days/1000<<endl;
	    float total_energy=energy_day*days/1000;
	   
	    float total_e=total_energy;
	   ///the total cost for the electricity// 
	    if(total_e>=1&&total_e<=100){
					cout<<"\n\nThe electricity Bills of Month:  "<<namem<<" "<<(total_e*1.94);
					cout<<"\n"<<"\n"<<endl;
					}
					if(total_e>100&&total_e<=300){
					cout<<"\n\nThe electricity Bills of Month:  "<<namem<<" "<<(total_e*3.64);
					cout<<"\n"<<"\n"<<endl;
					}
				 else	if(total_e>300&&total_e<=1000)
					{cout<<"\n\nThe electricity Bills of Month:  "<<namem<<" "<<total_e*6.15;
					cout<<"\n"<<"\n";
					}
					else if(total_e>1000)
					{cout<<"\n\nThe electricity Bills of Month:  "<<namem<<" "<<total_e*7.14;
					cout<<"\n"<<"\n";
					}}
     };
					 
     
     int main()
	{int choice;
char cha,ch;
welcome();
getch();
 //cout<<"Enter the "/E/" for enter the System\t"
system("cls");
	if(ch=='m'||ch=='M')
	{
}
//	main();}
	

	system("color  3E");
	cout<<"\n\n\n";
	cout<<"0: Exit ";
	cout<<"\n1: Register";
	cout<<"\n2: Login\t";
	cout<<"\n3: forget\t\n";
	cout<<"4: Pay Bill\n";
	cout<<"enter the your choice\t";
	cin>>choice;
	switch(choice)
	{
	case 0:{Exit();break;}
	case 1:{Register();break;}
	case 2:{Login();break;}
	case 3:{Forget();break;}
	case 4:{paybill();
		break;
	}

	default:{system("cls");
	cout<<"Sorry Invalide Key Pleased Try again\n";
	cout<<"Press m or M go to main\t\t\t";
 cin>>ch;
	if(ch=='m'||ch=='M')
	{
	system("cls");
	main();}}
	}
 if(choice==2)
 { 
// system("cls");
	    /////////////////////////////////////////////////////////////////////////////////
	elctricity_bills h1;
 h1.setproduct(60.21,750.00,725.00,3500.00,1000.00,133.00,150.00,1000.00,12.12,1300.124,50.00,5000.50,1100.156,120.147,90.00);
	h1.getproduct();
	cout<<"\n"<<"\n"<<"\n";
	h1.showproduct();}
	//else
 //{system("cls");
	//main();
	//}
	return 0; 
 }
     
    ////////definations of functions//////////////////
    /////////////Rigister function/////////////////
    void Register(){
	  int choice;
	system("color 3E");
	string username,password;
	system("cls");
	cout<<"Enter your name:\t";
	cin>>username;
	cout<<"Enter your Password:\t";
	cin>>password;
	ofstream outfile;
	outfile.open("amaar.txt");
	outfile<<username<<"\n"<<password;
	outfile.close();
	cout<<"\n\nRegistered Successfuly\n";
	char cn;
	
	cout<<"\n\nEnter your Choice!!\n";
cout<<"Press L or l key to Login \n";
cout<<"Press M or m key to Main \n";
cin>>cn;
if(cn=='L'||cn=='l'){

	Login();
	elctricity_bills h1;
 h1.setproduct(60.21,750.00,725.00,3500.00,1000.00,133.00,150.00,1000.00,12.12,1300.124,50.00,5000.50,1100.156,120.147,90.00);
	h1.getproduct();
	cout<<"\n"<<"\n"<<"\n";
	h1.showproduct();}
	
	else{system("cls");
		system("color  5F");
	cout<<"\n\n\n";
	cout<<"0: Exit \n";
	cout<<"1: Register";
	cout<<"\n2: Login";
	cout<<"\n3: forget\n";
	cout<<"4: Pay Bill\n";
	cout<<"enter the your choice\t";
	cin>>choice;
	switch(choice)
	{case 0:{Exit();break;}
	case 1:{Register();break;}
	case 2:{Login();break;}
	case 3:{Forget();break;}
	case 4:{paybill();
		break;
	}
	if(choice==2)
 { 
// system("cls");
	    /////////////////////////////////////////////////////////////////////////////////
	elctricity_bills h1;
 h1.setproduct(60.21,750.00,725.00,3500.00,1000.00,133.00,150.00,1000.00,12.12,1300.124,50.00,5000.50,1100.156,120.147,90.00);
	h1.getproduct();
	cout<<"\n"<<"\n"<<"\n";
	h1.showproduct();}

default:{system("cls");}
	cout<<"Sorry Invalide Key Pleased Try again\n";}}
	cout<<"Press m or M go to main\t\t\t";
 cin>>cn;
	if(cn=='m'||cn=='M')
	{
	system("cls");
	//main();system("cls");
		system("color  3E");
	cout<<"\n\n\n";
	cout<<"0: Exit \n";
	cout<<"1: Register";
	cout<<"\n2: Login\t";
	cout<<"\n3: forget\t\n";
	cout<<"4: Pay Bill\n";
	cout<<"enter the your choice\t";
	cin>>choice;
	switch(choice)
	{
	case 0:{Exit();break;}	
	case 1:{Register();break;}
	case 2:{Login();break;}
	case 3:{Forget();break;}
	case 4:{paybill();
		break;
	}if(choice==2)
 { 
// system("cls");
	    /////////////////////////////////////////////////////////////////////////////////
	elctricity_bills h1;
 h1.setproduct(60.21,750.00,725.00,3500.00,1000.00,133.00,150.00,1000.00,12.12,1300.124,50.00,5000.50,1100.156,120.147,90.00);
	h1.getproduct();
	cout<<"\n"<<"\n"<<"\n";
	h1.showproduct();}

	}}
	//}}

}
	

 

//}}////////Login function starting ////
 void Login()
{system("cls");
char ch,cn;
int choice;
system("color 3E");
string FileString,FilePassword,idname,idpassword;
	int exist=0;
	
	cout<<"Enter the username\t";
	cin>>idname;
	cout<<"Enter the password\t";
	cin>>idpassword;
	ifstream infile;
	infile.open("amaar.txt");
 	infile>>FileString>>FilePassword;
		infile.close();
 	if(FileString==idname && FilePassword==idpassword)
	{cout<<"\t\t\t====================\nLogin Success \n\t\t\t      Welcome\n\t\t\t====================";
	 
	//system("cls");
	}
	else {
	cout<<"\n\nInvalid  User or Password\n";
cout<<"Press L or l key to Login again\n";
cout<<"Press M or m key to Main again\n";
cin>>cn;
if(cn=='L'||cn=='l'){

	Login();
	elctricity_bills h1;
 h1.setproduct(60.21,750.00,725.00,3500.00,1000.00,133.00,150.00,1000.00,12.12,1300.124,50.00,5000.50,1100.156,120.147,90.00);
	h1.getproduct();
	cout<<"\n"<<"\n"<<"\n";
	h1.showproduct();}
	
	
	else{system("cls");
		system("color  3E");
	cout<<"\n\n\n";
	cout<<"0: Exit\n";
	cout<<"1: Register";
	cout<<"\n2: Login\t";
	cout<<"\n3: forget\t\n";
	cout<<"4: Pay Bill\n";
	cout<<"enter the your choice\t";
	cin>>choice;
	switch(choice)
	{case 0:{Exit();break;}
	case 1:{Register();break;}
	case 2:{Login();break;}
	case 3:{Forget();break;}
	case 4:{paybill();
		break;
	}

	default:{system("cls");
	cout<<"Sorry Invalide Key Pleased Try again\n";
	cout<<"Press m or M go to main\t\t\t";
 cin>>ch;
	if(ch=='m'||ch=='M')
	{
	system("cls");
	/*main();*/
	system("cls");
		system("color  5F");
	cout<<"\n\n\n";
	cout<<"0: Exit\n";
	cout<<"1: Register";
	cout<<"\n2: Login\t";
	cout<<"\n3: forget\t\n";
	cout<<"4: Pay Bill\n";
	cout<<"enter the your choice\t";
	cin>>choice;
	switch(choice)
	{
		case 0:{Exit();break;}
	case 1:{Register();break;}
	case 2:{Login();break;}
	case 3:{Forget();break;}
	case 4:{paybill();
		break;
	}}}
	}
 if(choice==2)
 { 
// system("cls");
	    /////////////////////////////////////////////////////////////////////////////////
	elctricity_bills h1;
 h1.setproduct(60.21,750.00,725.00,3500.00,1000.00,133.00,150.00,1000.00,12.12,1300.124,50.00,5000.50,1100.156,120.147,90.00);
	h1.getproduct();
	cout<<"\n"<<"\n"<<"\n";
	h1.showproduct();}
	
	}
}
}
//start function ////
}

	void Forget()
	{
	system("cls");
		int ch;
		cout<<"1: forget your username\n";
		cout<<"2: forget our passsword\n";
		cout<<"3: go to mainmenu\n";
		cout<<"Enter your way to found your account: ";
		cin>>ch;
		system("cls");
		switch(ch)
		{	case 2:
			{	
			string FileString,FilePassword;
			string usern,pw1;
			cout<<"enter your remember username:\t";
			cin>>usern;
			ifstream  infile("amaar.txt");
			infile>>FileString>>FilePassword;
			if(FileString==usern)//ending if
			{cout<<"\nWelcome Your Account is Found\n"<<"your Password is: "<<FilePassword<<endl;}
			else {cout<<"Not Found\n";cout<<"Go to main menu\n\n";main();}
				int ch;
			cout<<"1: Login\n2:Go tomain menu\n";
			cout<<"enter your choice\n";cin>>ch;
			if(ch==1)
			{system("cls");
			Login();}
			else
			{system("cls");
			main();
			}
			break;
		}
	
			case 1:{
				string FileString,FilePassword;
				string userp,us2,pw2;
				cout<<"Enter your rememberd password\n";
				cin>>userp;
				ifstream infile("amaar.txt");
				infile>>FileString>>FilePassword;
			if(FilePassword==userp)
			{cout<<"\nYour Account Found\n"<<"Your username is: "<<FileString<<endl;
				int ch;
			cout<<"1: Login\n2:Go tomain menu\n";
			cout<<"enter your choice\n";cin>>ch;
			if(ch==1)
			{system("cls");
			Login();}
			else
			{system("cls");
			main();
			}
		}
			else {cout<<"\nNot Found\n";cout<<"Go to main menu\n";main(); system("cls");}
			break;
	}
			case 3:
		{	cout<<"Lets Login it";getch();
				Login();
				break;
		}
			default: cout<<"Invalid Input";	
			break;
	}
		}///ending forget
	
	//Ending function ////
    void paybill(){char ch;
    
    	string username,namebank,Area,nic;
	int balance,acountnum,bbalance;
	system("cls");
	cout<<"Enter  your Details\n";
	cout<<"Enter your name:\t";
	cin>>username;
	cout<<"Enter your Acount Number:\t";
	cin>>acountnum;
	cout<<"Enter Bank name:\t";
	cin>>namebank;
	cout<<"enter your Districs\t";
	cin>>Area;
	cout<<"Enter your NIC Number(number should be 13 numbers )\n";
	cin>>nic;
	
	cout<<"Amount of your  Bill\t";
	cin>>balance;
	cout<<"Enter Balance in your Acount\t";
	cin>>bbalance;
	system("cls");
	if(bbalance>=balance){
	cout<<"Your Bill Has Been paid";
	cout<<"\nYour Current Balance Is:\t"<<bbalance-balance;
 
}
else
{
	system("cls");
	cout<<"Soorry! Your Sufficient balance is \t"<<bbalance<<endl;
	cout<<"You want to pay \t"<<balance;
 
}

cout<<"\n"<<endl;
cout<<"\npress m or M to go Main Page\t ";
 cin>>ch;
 if(ch=='m'||ch=='M')
{

system("cls");
	main();
}

			}
   void welcome()
   {
	   cout<<"\n\n";
//	Icon();
	cout<<"\n\n\n\n\n"<<setw(50)<<"SEARCHING....\n	  \t\t";
	system("Color 3E");
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

	int in=200,a=201,b=186,c=204,d=205,e=187,f=188,g=185;
	//cout<<char(b);
	//cout<<char(a);
	
	system("color 3E");
	cout<<"\n\t\t"<<char(a)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(e)<<"\n";
	cout<<"\t\t"<<char(b)<<setw(2)<<char(a)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<setw(7)<<char(a)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(e)<<setw(6)<<char(a)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(e)<<setw(7)<<char(b)<<endl;
	cout<<"\t\t"<<char(b)<<setw(2)<<char(b)<<setw(15)<<char(b)<<setw(9)<<char(b)<<setw(6)<<char(b)<<setw(9)<<char(f)<<setw(7)<<char(b)<<endl;
	cout<<"\t\t"<<char(b)<<setw(2)<<char(b)<<setw(15)<<char(b)<<setw(9)<<char(b)<<setw(6)<<char(b)<<setw(16)<<char(b)<<endl;
	cout<<"\t\t"<<char(b)<<setw(2)<<char(b)<<setw(15)<<char(b)<<setw(9)<<char(b)<<setw(6)<<char(b)<<setw(16)<<char(b)<<endl;
	cout<<"\t\t"<<char(b)<<setw(2)<<char(c)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<setw(7)<<char(c)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(g)<<setw(7)<<char(b)<<setw(16)<<char(b)<<endl;
	cout<<"\t\t"<<char(b)<<setw(2)<<char(b)<<setw(15)<<char(b)<<setw(9)<<char(b)<<setw(6)<<char(b)<<setw(16)<<char(b)<<endl;
	cout<<"\t\t"<<char(b)<<setw(2)<<char(b)<<setw(15)<<char(b)<<setw(9)<<char(b)<<setw(6)<<char(b)<<setw(16)<<char(b)<<endl;
	cout<<"\t\t"<<char(b)<<setw(2)<<char(b)<<setw(15)<<char(b)<<setw(9)<<char(b)<<setw(6)<<char(b)<<setw(9)<<char(e)<<setw(7)<<char(b)<<endl;
	cout<<"\t\t"<<char(b)<<setw(2)<<char(in)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<setw(4)<<char(220)<<setw(3)<<char(in)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(f)<<setw(3)<<char(220)<<setw(3)<<char(in)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(f);
cout<<"\t"<<char(b)<<endl;
cout<<"\t\t"<<char(b)<<"   ELectricity Bill Calculator System \t\t"<<char(b)<<endl;
cout<<"\t\t"<<char(in)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(f)<<endl;
cout<<"\n\n\n\n"<<setw(41)<<char(a)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(e)<<endl;
cout<<"\t\t\t\t\t"<<char(b)<<"Made By :\t Amaar Hussnain"<<setw(3)<<char(b)<<endl;
cout<<"\t\t\t\t\t"<<char(b)<<setw(33)<<char(b)<<endl;
cout<<"\t\t\t\t\t"<<char(b)<<"Roll Number :\t 20SW015 "<<setw(9)<<char(b)<<endl;
cout<<"\t\t\t\t\t"<<char(b)<<setw(33)<<char(b)<<endl;
cout<<"\t\t\t\t\t"<<char(b)<<"Section :\t (ii)"<<setw(13)<<char(b)<<endl;
cout<<"\t\t\t\t\t"<<char(b)<<setw(33)<<char(b)<<endl;
cout<<"\t\t\t\t\t"<<char(b)<<"Subject: Programming Fundamental"<<char(b)<<endl;
cout<<"\t\t\t\t\t"<<char(b)<<setw(33)<<char(b)<<endl;
cout<<"\t\t\t\t\t"<<char(b)<<"Submitted to :\t Sir Naeem Ahmed "<<char(b)<<endl;
cout<<"\t\t\t\t\t"<<char(b)<<setw(33)<<char(b)<<endl;
cout<<setw(41)<<char(in)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(d)<<char(f);
	
}
void Exit(){
	
}

