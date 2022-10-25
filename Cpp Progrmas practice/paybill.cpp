#include<iostream>
using namespace std;
class myacount{
private:
	string cname;
	int acountno;
	int balance;
	int withdaraw;
	int deposite;
	int paybill;
public:
void getcustomer(){
	cout<<"enter the name of acount holder\t";cin>>cname;
	cout<<endl;
	cout<<"Enter the acount number of your acount\t";cin>>acountno;
	cout<<"enter your openning balance\t";cin>>balance;
}
void showcustomer(){
	cout<<"enter the name of acount holder\t";cin>>cname;
	cout<<endl;
	cout<<"Enter the acount number of your acount\t";cin>>acountno;
	cout<<"enter your openning balance\t";cin>>balance;
}
	
};
