#include<iostream>
using namespace std;
void facto(long);
int main(){
	long n;
	long fact;
	cout<<"enter the number\t";
	cin>>n;
	facto(n);
	//cout<<"The factorial is\t"<<fact;
	return 0;
}
void facto(long n){
	if(n>1)
	return n*facto(n-1);
	else
	return 0;
}
