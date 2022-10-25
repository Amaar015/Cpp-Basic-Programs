#include<iostream>
using namespace std;
class mother{
	private:
		int age;
		string name;
	public:
		void getmother()
		
		{
		cout<<"enter the name\t";cin>>name;
		cout<<"enter the age\t";cin>>age;}
		
		void showmother()
		{
		cout<<"the name\t"<<name<<endl;
		cout<<" the age\t"<<age<<endl;}
};
class daugter : public  mother{
	
};
int main()
{
	daugter d1,d2,d3;
	d1.getmother();
	d2.getmother();
	d3.getmother();
 d1.showmother();
	d2.showmother();
	d3.showmother();
	return 0;
}
