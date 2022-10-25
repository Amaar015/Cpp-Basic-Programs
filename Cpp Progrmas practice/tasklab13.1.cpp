#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;
int main(){
	ofstream kfile;
	kfile.open("D:\Amaar.txt");// kfile.open  here use to open the file Amaar.txt in the harddrive D//
	kfile<<"The Programing Fundamental\n Functional English\n Applied Physics\n Applied Calculus\n And IICT\n";//From Here starting the Editting the the file
	kfile<<"These are our subject in the first semmester at MUET Department software engineering\n";
	kfile.close();// here the opened file Amaar.txt is close by using kfile.cllose keyword//
	cout<<"File Has Been Editting\t";
	return 0;
}
