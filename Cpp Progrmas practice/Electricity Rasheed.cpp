#include<iostream>
using namespace std;
int main(){
	char ch;
	int amount,unit;
	cout<<"Enter Customer type for Domestic(D) and Commercia(C):  ";
	cin>>ch;
	cout<<"Enter The number of units brunt : ";
	cin>>unit;
	cout<<"\n\n\n";
	if(ch=='D'&&unit<=150){
		cout<<"Customer Type = Domestic\n";
		cout<<"You have Burnt "<<unit<<" number of units\n";
		cout<<"You have charged with Rs : "<<5*unit;
	}
	else if(ch=='D'&&unit>150){
		cout<<"Customer Type = Domestic\n";
		cout<<"You have Burnt "<<unit<<" number of units\n";
		cout<<"You have charged with Rs : "<<8*unit;
	}
	else if(ch=='C'&&unit<=150){
		cout<<"Customer Type = Commercial\n";
		cout<<"You have Burnt "<<unit<<" number of units\n";
		cout<<"You have charged with Rs : "<<8*unit;
	}
	else
{
		cout<<"Customer Type = Commercial\n";
		cout<<"You have Burnt "<<unit<<" number of units\n";
		cout<<"You have charged with Rs : "<<15*unit;
	}
}
