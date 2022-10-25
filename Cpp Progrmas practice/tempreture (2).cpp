#include<iostream>
using namespace std;
int main()
{
	int num;
	float temp;
	cout<<"type to convert to temperature"<<endl;
	cout<<" 2 type the temperature in mun"<<endl;
	cin>>num;
	if(num==1)
	{
	cout<<"enter temperature in far"<<endl;
	cin>>temp;
	cout<<"in the celcius thet is "<<5/9*(temp-32)<<endl;
}
	else
{
		cout<<"in the temp in celcius"<<endl;
	cin>>temp;
	cout<<"in farhen temperature"<<9/5*(temp+32)<<endl;}
	return 0;	
}
	
	

