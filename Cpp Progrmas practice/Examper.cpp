#include<iostream>
#include<windows.h>
#include<iomanip>
#include<conio.h>

using namespace std;
void star(char);
void calcul();
int main(){
	char a,cha;
	cout<<"Enter the character\t";cin>>a;
	star(a);
	
	calcul();
	
	star(a);
	cout<<"enter the your choice press = for goto main\n press another key for Exit ";cin>>cha;
if(cha=='m'){
	system("cls");
	main();
	
}
else
{
	
}

	return 0;
}
void star(char ch){
	cout<<"\n\n\n";
	for(int i=1;i<=20;i++){
		cout<<ch;
	}
}
void calcul(){
	int num,numb;
char ch;
system("color A5");
cout<<"\nEnter the number num\t";cin>>num;
cout<<"\nEnter the number numb\t";cin>>numb;
cout<<"\nEnter the Operator \t";cin>>ch;
if(ch=='+'){
	cout<<"The sumation of numbers is\t"<<num+numb;
	cout<<endl;
}
else if(ch=='-'){
	cout<<"THe Substraction of numbers is \t"<<num-numb<<endl;
	cout<<endl;
}
else if(ch=='*'){
	cout<<"THe Multiplication of numbers is \t"<<num*numb<<endl;
	cout<<endl;
}
else if(ch=='/'){
	cout<<"THe Division of numbers is \t"<<num/numb<<endl;
	cout<<endl;
}
else if(ch=='%'){
	cout<<"THe Remainder of numbers is \t"<<num%numb<<endl;
	cout<<endl;
}

}
