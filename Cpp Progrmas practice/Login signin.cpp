#include<iostream>
#include<windows.h>
#include<string>
#include<istream>
#include<fstream>
#include<stdlib.h>
using namespace std;
void Login();
void Register();
void Forget();
int main()
{
	int choice;
	cout<<"*****************Electricity Bill Calculate System****************************\n";
	cout<<"\n1: Login\t";
	cout<<"\n2: Register\t";
	cout<<"\n3:forget\t\n";
	cout<<"enter the your choice\t";
	cin>>choice;
	switch(choice)
	{case 1:{
	Login();
	break;}
	case 2:
{	Register();
	break;}
	case 3:{
	Forget();
	break;}
	case 4:{
	cout<<"thank you for use\t";
	break;}
	default:
	{
	cout<<"Sorry\t";
	main();}
	}//ending switch
	}//ending main function

///starting function register
void Register(){
	string username,password;
	system("cls");
	cout<<"Enter your name:\t";
	cin>>username;
	cout<<"Enter your Password:\t";
	cin>>password;
	ofstream outfile("amaar.txt");
	outfile<<username<<endl<<password;
	system("cls");
	cout<<"login Successfuly\t";
	main();
}
////////Login function starting ////
void Login(){
	int exist=0;
	system("cls");
	string idname,idpassword,us,pw;
	cout<<"Enter the username\t";
	cin>>idname;
	cout<<"Enter the password\t";
	cin>>idpassword;
	ifstream  infile("amaar.txt");
 	infile>>us>>pw;
 		infile.close();	
			if(us==idname&& pw==idpassword)
 		{
 	cout<<"welcome to online bill calculating system\n";
 		cin.get();
		cin.get();
		main();	
				//break;
			}//ending if
	
	//ending while

	//ending if
	else
	{
		cout<<"Sorry incorect information\t";
		cin.get();
		cin.get();
		main();
		
	}//ending else
	}//ending function here//
	//starting function here//
	void Forget(){
		system("cls");
		int ch;
		cout<<"1: forget your username\n";
		cout<<"2: forget our passsword\n";
		cout<<"3: go to mainmenu\n";
		cout<<"Enter your way to found your account\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
			
			int exi=0;
			string usern,us1,pw1;
			cout<<"enter your remember username:\t";
			cin>>usern;
			ifstream  infile("amaar.txt");
			while(infile>>usern>>us1>>pw1)
			{if(us1==usern)
			{exi=1;
			break;
			}//ending if
			}//ending while
			
			infile.close();
			if(exi==1)
			{
				cout<<"welcome your acount is found\n";
				cout<<"your password is\t"<<pw1;
				cin.get();
				cin.get();
				main();
				
			}
			else
			{
				cout<<"Sorry we invalide username\n";
				cin.get();
				cin.get();
				main();
			break;
		}
	}	
		//ending case 1 here//
			case 2:{
	
			
		
			
				int exo=0;
				string userp,us2,pw2;
				cout<<"Enter your rememberd password\n";
				cin>>userp;
				ifstream infile("amaar.txt");
			while (infile>>us2>>pw2)
			{
				if(pw2==userp)
				{exo=1;
			
				}//ending if
			}//ending while
			infile.close();
			if(exo==1)
			{
				cout<<"welcome your acount is found:\n";
				cout<<"your username is\t"<<us2;
				cout<<"\nyour password is"<<pw2;
				cin.get();
				cin.get();
				main();
				break;
			}
			else
			{
				cout<<"sorry\n";
				cin.get();
				cin.get();
				main();
				break;
			}
	}
			case 3:
		{
				
					cout<<"your chice is incorect key try again\n";
				cin.get();
				cin.get();
				main();
				Forget();
				break;
		}
			
			
			
			
			
	}
		}///ending forget
	
