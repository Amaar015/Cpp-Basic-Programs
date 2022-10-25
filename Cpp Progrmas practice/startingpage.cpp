#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
int main(){
	
	char vowel[5];
	char array[]={"abcdefghijklmnopqrstuvwxyz"};
	int size=sizeof(array)/sizeof(char);
	cout<<"The size of the array is\t"<<size;
	cout<<"\n"<<"\n";
	for(int i=0;i<size;i++){
		cout<<array[i];
		cout<<"\t";
	}
	cout<<"\n"<<"\n";
// cout<<"The Vowels\t";
 //cout<<"   ";		
	for(int i=0;i<size;i++){
	
/*	if(array[i]='a'){
		vowel[0]='a';
	}
	if(array[i]='e'){
		vowel[1]='e';
	}	
	if(array[i]='i'){
		vowel[2]='i';
	}
	if(array[i]='o'){
		vowel[3]='o';
	}
	if(array[i]='u'){
		vowel[4]='u';
	}*/
			vowel[0]='a';
vowel[1]='e';
vowel[2]='i';
vowel[3]='o';
vowel[4]='u';


		
	
	 
		//for(int i=0;i<5;i++){
	
cout<<vowel[i]<<" , ";
}
//}
return 0;
}
