#include<iostream>
using namespace std;
int main(){
	for(int i=5;i>=1;i--){
		for(int j=1;j<=(5-i);j++){
			cout<<" ";
			
		}
		for(int y=1;y<=(2*i-1);y++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
