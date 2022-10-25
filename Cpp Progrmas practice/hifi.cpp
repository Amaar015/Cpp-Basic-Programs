#include<iostream>
using namespace std;
void function();

int main(){
		bankacount c1,c2,c3,c4,c5,c6;
	string name;
 int acountnum;
 string division;
 string company;
 int balance;
 cout<<"Enter your Name:\t";cin>>name;
 cout<<"Enter your acount number:  ";cin>>acountnum;
 cout<<"Enter your Distric:  \t ";cin>>division;
 cout<<"Enter your Company of electricity: ";cin>>company;
 cout<<"How many rupees in your Bank acount\t";cin>>balance;
 c1.customer(name,acountnum,division,company,balance);
 int amount;
 cout<<"enter Amount which you want to deposite in your bank acoutn: ";cin>>amount;
 c1.deposit(amount);
 cout<<"How many rupees you want to pay bills\n";cin>>amount;cout<<endl<<endl;
 c1.withdra(amount);

	function();
	
return 0;
}
void function(){
	class bankacount{
	private:
	string name;
 int acountnum;
 string division;
 int deposite;
 string company;
int balance;
int withdraw;
public:
	void customer(string na,int acn,string div,string com,int balan){
		name=na;
		acountnum=acn;
		division=div;
		company=com;
		balance=balan;
	}
	void deposit(int amount){
		balance+=amount;
		cout<<"your Money has been deposited\n";
		cout<<"your balance is \t"<<balance;
	cout<<endl;
	}
	void withdra(int amount){
		if(balance>amount){
		
		balance-=amount;
		cout<<"your Bill will be paid\n";
		cout<<"your balance is\t"<<balance;
}
else
cout<<"you have less amount\n";
	}
};
/*int main(){

	bankacount c1,c2,c3,c4,c5,c6;
	string name;
 int acountnum;
 string division;
 string company;
 int balance;
 cout<<"Enter your Name:\t";cin>>name;
 cout<<"Enter your acount number:  ";cin>>acountnum;
 cout<<"Enter your Distric:  \t ";cin>>division;
 cout<<"Enter your Company of electricity: ";cin>>company;
 cout<<"How many rupees in your Bank acount\t";cin>>balance;
 c1.customer(name,acountnum,division,company,balance);
 int amount;
 cout<<"enter Amount which you want to deposite in your bank acoutn: ";cin>>amount;
 c1.deposit(amount);
 cout<<"How many rupees you want to pay bills\n";cin>>amount;cout<<endl<<endl;
 c1.withdra(amount);
}*/
	
}
