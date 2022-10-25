#include<iostream>
using namespace std;
int main()
{
	int z,y,n=5;
	
	
	
	for(z=1;z<=n;z++)
	{for(y=0;y<=2*n-1;y++)
	{
	if(y<=n+z-1& y>=n-z+1)
	cout<<"A";
	//else 
	//cout<<" ";
	}
	cout<<"\n";
	}
	/*//for(z=1;z<=n;z++)
	{for(y=n;y<=1;y++)
	{//if(y<=n+z-1& y>=n-z+1)
	cout<<"A";
	//else 
	cout<<" ";
	}
	cout<<"\n";
	}*/
	return 0;
}
