#include<iostream>
using namespace std;
int main()
{
	float british_pound=1.487;
	float french_franc=0.172;
	float german_deuts=0.584;
	float japanese_yen=0.00955;
	float dollars;
	
	cout<<"enter a dollars="<<endl;
	cin>>dollars;
	cout<<"convert a british pound into dollars="<<dollars*1.487<<endl;
	cout<<"convert a french franc into dollars="<<dollars*0.172<<endl;
	cout<<"convert a german deuts into dollars="<<dollars*0.584<<endl;
	cout<<"convert a japanese yen into dollars="<<dollars*0.00955<<endl;
	return 0;
}
