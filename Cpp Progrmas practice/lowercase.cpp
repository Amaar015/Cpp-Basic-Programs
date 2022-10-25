#include<iostream>
using namespace std;
int main()
{
	int result;
	char ch;
	cout<<"enter the character\n";
	cin>>ch;
//	cout<<"result is \n"<<int(ch)<<endl;
	result=int(ch);
	if(result>=97)
	cout<<"lower case";
	else
	cout<<"uper case";
	return 0;
}
