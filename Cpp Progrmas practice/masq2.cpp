#include<iostream>
using namespace std;
void angle(char);
int main()
{
	angle('@');
	return 0;
}

    void angle(char ch){
	int n=5;
	for(int z=1;z<=n;z++)
	{for( int y=0;y<=2*n-1;y++)
	{if(y<=n+z-1& y>=n-z+1)
	cout<<"A";
	else 
	cout<<" ";
	}
	cout<<"\n";
	}
}
