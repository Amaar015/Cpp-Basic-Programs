#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

	int pounds;
	float shillings;
	float pence;
	cout<<"enter a a:"<<endl;
	cin>>pounds;
    	cout<<"enter  b:"<<endl;
	cin>>shillings;
		cout<<"enter c :"<<endl;
	cin>>pence;
	cout<<"pound"<<setw(10)<<pounds<<endl;
	cout<<"shillings"<<setw(10)<<shillings<<endl;
	cout<<"pence"<<setw(10)<<pence<<endl;
	cout<<pounds<<"."<<shillings<<"."<<pence<<endl;
	return 0;
}
