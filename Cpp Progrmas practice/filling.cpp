#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	
ifstream kfile;
kfile.open("E:\Amaar.txt");
kfile.seekg(4);
if(kfile.is_open()){
	string line="";
	while(getline(kfile,line)){
		
			cout<<line<<endl;
			break;
			
		}
	
	kfile.close();

}
else
{
cout<<"error";
}
return 0;
}




