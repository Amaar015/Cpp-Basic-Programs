#include<iostream>
using namespace std;
int main()
{
	float diameter_A=15,diameter_B=20;
	int secondsA,secondsB;
	float radius_A,radius_B,pi=3.14,distanceA,distanceB;
	cout<<"Enter the time(in seconds) for A\t";cin>>secondsA;
	cout<<"Enter the time(in seconds) for B\t";cin>>secondsB;
	radius_A=diameter_A/2;
	cout<<"Radius of Circle A\t"<<radius_A<<endl;
	radius_B=diameter_B/2;
	cout<<"Radius of Circle B\t"<<radius_B<<endl;
	cout<<endl;
	cout<<"The Distance for A=\t"<<radius_A*3.14<<endl;
	cout<<"The Distance for B=\t"<<radius_B*3.14<<endl;
	distanceA=radius_A*3.14;
	distanceB=radius_B*3.14;
	cout<<"The Speed of A is\t"<<distanceA/secondsA<<endl;
	cout<<"The Speed of B is\t"<<distanceB/secondsB<<endl;
	if((distanceA/secondsA)>(distanceB/secondsB))
	{
		cout<<endl;
		cout<<"The A is Faster than B";
		cout<<endl;
	}
	else{
		cout<<endl;
		cout<<"The B is Faster than A";
		cout<<endl;
	}
	return 0;
}
