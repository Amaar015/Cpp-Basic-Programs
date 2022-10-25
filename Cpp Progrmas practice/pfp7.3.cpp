#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter the character\t";cin>>ch;
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		cout<<endl;
		cout<<"The character is  Vowel\t"<<ch;
		cout<<endl;
	}
	else{
		cout<<endl;
		cout<<"The character is  Consonant\t"<<ch;
		cout<<endl;
	}
}
