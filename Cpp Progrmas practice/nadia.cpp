#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
	int c_temp;
	cout<<"enter a number="<<endl;
	cin>>c_temp;
	cout<<"enter a temp="<<setw(12)<<(9/5)*(c_temp+32)<<endl;
	return 0;
}
