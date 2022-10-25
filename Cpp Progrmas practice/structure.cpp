#include<iostream>

using namespace std;
	string names;
	int salary;
	string id;
struct name{
	void read(){
	
	
	cout<<"enter the name\t";
	cin>>names;
	cout<<"enter the salary\t";
	cin>>salary;
	cout<<"enter the email\t";
	cin>>id;
}
void display(){
	cout<<"your name is \t"<<names<<endl;
	cout<<"your salary\t"<<salary<<endl;
	cout<<"your email is \t"<<id<<endl;
} 
};
int main(){
	name p1,p2;
p1.read();
cout<<endl;
p1.display();
return 0;
}
