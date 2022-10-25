#include<iostream>
using namespace std;
class product{
	private:
		int num;
		public:
			 counter()
			{num==0; }
			void getcounter()
			{return num;}
			
			void operator ++()
			{++num;
			}
			
			
};
int main()
{
	product c1,c2;
	cout<<"the numbber initialize\t"<<c1.getcounter();
	++c1;
	++c1;
	cout<<"the number is\t"<<c1.getcounter();
	c2=c1;
	++c2;
	cout<<"the number is\t"<<c1.getcounter();
	return 0;
}
