#include<iostream>
using namespace std;
class employee{
	private:
	int empnumber;
	float salary;
	public:
		void setemployee(int en,float es)
		{empnumber=en;
		 salary=es;
		}
		void showemployee(){
			cout<<"THe number of the Employee\t"<<empnumber<<endl;
			cout<<"the salary of the employee\t"<<salary<<endl;
		}
		
};
int main(){
employee emp1,emp2,emp3;
emp1.setemployee(1024,2500.3600);
emp1.showemployee();
emp2.setemployee(1123,3600.120);
emp2.showemployee();
emp3.setemployee(34250,1241.3225);
emp3.showemployee();
return 0;}
