#include<iostream>                       // this program is made for the find the size of characters//
                            
#include<iomanip>                  //this header file is use for the use of setw function

using namespace std;

int main()
{    


     cout<<"size of int="<<sizeof(int)<<setw(4)<<"bytes"<<endl;   
     cout<<"size of short="<<sizeof(short)<<setw(4)<<"bytes"<<endl;
     cout<<"size of long="<<sizeof(long)<<setw(4)<<"bytes"<<endl;
     cout<<"size of float="<<sizeof(float)<<setw(4)<<"bytes"<<endl;
     cout<<"size of char="<<sizeof(char)<<setw(4)<<"bytes"<<endl;
     
	
	return 0;
	
}
