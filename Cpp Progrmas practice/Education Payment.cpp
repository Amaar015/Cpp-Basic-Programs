#include<iostream>
#include<windows.h>		//For Timing Fuction in HomePage
#include<iomanip>		//For using Manipulaters
#include<fstream>		//For Storing Data in File
#include<conio.h>		//For Hold Function
#include<stdlib.h>	 		//For Setting Color 

using namespace std;
void NED();
void MUET();
void FAST();
void Nust();
void karachi();
void Dawood();
void Sindh();
void LUMHS();
void QUEST();
void SAU();
void shah();

void educaation_payment();
int main(){
	int ch;
	cout<<"Name of institue in which you want to pay Fee are given as Below\n";
	cout<<"1:  NED University Karachi\n";
	cout<<"2:  MUET Jamshoro\n";
	cout<<"3:  FAST University Islamabad\n";
	cout<<"4:  Nust University Islamabad\n";
	cout<<"5:  Karachi University Karachi\n";
	cout<<"6:  Dawood University Karachi\n";
	cout<<"7:  Sindh University Jamshoro\n";
	cout<<"8:  LUMHS Jamshoro \n";
	cout<<"9:  QUEST Nawabshah \n";
	cout<<"10: SAU Tando jam\n";
	cout<<"11: Shah Abdul Latif University Khairpoor\n";
	cout<<"12; Go to Main\n";
	cout<<"Enter your choice:\t";
	cin>>ch;
switch (ch)
	{
		case 1:
		NED();
		break;
	case 2:
		MUET();
		break;	
		case 3:
			FAST();
	}
	
	
	
	
	
	
	
	return 0;
}
void educaation_payment(){
cout<<" amaar";	
	}
	void NED(){
		string name="NED_University_Karachi";
		string depart;
		int batch;
	 string feet;
	 string Roll;
	 string discription;
  long year;
		string bank;
		long acount,uacount=783492314;
  cout<<name<<endl;
		cout<<"Enter the Name of Yor Department(Enter Only Name not Engineerig)  ";
		cin>>depart;
		cout<<"\nEnter your Year of batch\t";
		cin>>batch;
		cout<<"\nEnter you bfee type\n";
		cout<<"Admission_Fee\n\tSemmester_Fee\n\tExamination_Fee\n\tSupplimentary_Fee\n\tLibrary_Fee\n\tInternet_Fee\n\tIdentity_Card_Fee\n\t";
		cin>>feet;
			if(feet=="Admission_Fee"||feet=="Semmester_Fee"||feet=="Examination_Fee"||feet=="Supplimentary_Fee"||feet=="Library_Fee"||feet=="Internet_Fee"||feet=="Identity_Card_Fee")	
	 {
		cout<<"\nEnter your Roll # :\t";
		cin>>Roll;
		cout<<"\nEnter Fee Discriptiion\t";
		cin>>discription;
		cout<<"\nEnter your Yaer of Study\t";
		cin>>year;
		cout<<"\nEnter Bank Name\n\tHMB\n\tHBL \t";
		cin>>bank;
		cout<<"\nenter your Acount Number(atleast 9 numbers)\t";
		cin>>acount;
		cout<<"\nThe acount your want Send Fee\t"<<uacount;
 }
 else
 cout<<"You Entered the Wrong fee type\n";
	
	}
void MUET(){
		string depart;
		int batch;
		string uname="MUET_Jamshoro";
	 string feet;
	 string Roll;
	 string discription;
  long year;
		string bank;
		long acount,uacount=425423458;
  cout<<uname<<endl;
		cout<<"Enter the Name of Yor Department(Enter Only Name not Engineerig)  ";
		cin>>depart;
		cout<<"\nEnter your Year of batch\t";
		cin>>batch;
		cout<<"\nEnter you fee type\n";
		cout<<"Admission_Fee\n\tSemmester_Fee\n\tExamination_Fee\n\tSummer_Semester_Fee\n\tLibrary_Fee\n\tInternet_Fee\n\tIdentity_Card_Fee\n\t";
		cin>>feet;
			if(feet=="Admission_Fee"||feet=="Semmester_Fee"||feet=="Examination_Fee"||feet=="Summer_Semester_Fee"||feet=="Library_Fee"||feet=="Internet_Fee"||feet=="Identity_Card_Fee")	
	 {
		cout<<"\nEnter your Roll # :\t";
		cin>>Roll;
		cout<<"\nEnter Fee Discriptiion\t";
		cin>>discription;
		cout<<"\nEnter your Yaer of Study\t";
		cin>>year;
		cout<<"\nEnter Bank Name\n\tUBL\n\tHBL \t";
		cin>>bank;
		cout<<"\nenter your Acount Number(atleast 9 numbers)\t";
		cin>>acount;
		cout<<"\nThe acount your want Send Fee\t"<<uacount;
 }
 else
 cout<<"You Entered the Wrong fee type\n";
	
	}
void FAST(){
		string depart;
		int batch;
		string uname="FAST_University";
	 string feet;
	 string Roll;
	 string discription;
  long year;
		string bank;
		long acount,uacount=425423458;
  cout<<uname<<endl;
		cout<<"Enter the Name of Yor Department(Enter Only Name not Engineerig)  ";
		cin>>depart;
		cout<<"\nEnter your Year of batch\t";
		cin>>batch;
		cout<<"\nEnter you fee type\n";
		cout<<"Admission_Fee\n\tSemmester_Fee\n\tExamination_Fee\n\tSupplimentory_Fee\n\tLibrary_Fee\n\tInternet_Fee\n\tIdentity_Card_Fee\n\t";
		cin>>feet;
		
		if(feet=="Admission_Fee"||feet=="Semmester_Fee"||feet=="Examination_Fee"||feet=="Supplimentary_Fee"||feet=="Library_Fee"||feet=="Internet_Fee"||feet=="Identity_Card_Fee")	
	 {
		cout<<"\nEnter your Roll # :\t";
		cin>>Roll;
		cout<<"\nEnter Fee Discriptiion\t";
		cin>>discription;
		cout<<"\nEnter your Yaer of Study\t";
		cin>>year;
		cout<<"\nEnter Bank Name\n\tHMB\n\tHBL \t";
		cin>>bank;
		cout<<"\nenter your Acount Number(atleast 9 numbers)\t";
		cin>>acount;
		cout<<"\nThe acount your want Send Fee\t"<<uacount;
 }
 else
 cout<<"You Entered the Wrong fee type\n";
	
}

