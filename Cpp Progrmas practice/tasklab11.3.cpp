#include<iostream>
using namespace std;
class person{
	protected:
		string name;
	public:
	void 	setname(string na)
	{name=na;}
 	void showname()
	{cout<<"your name is  \t"<<name;
	//cout<<endl;
	}
};
	class student :public person{
		private:
			string Rollnumber;
			string department;
			public:
			void setdata(string roll,string depart){
				Rollnumber=roll;
				department=depart;
			}
			void displaydata()
			{cout<<endl;
				cout<<"The Roll number is:\t"<<Rollnumber<<endl;
				cout<<"the Department is:\t"<<department<<endl;
				
			}
	};
	int main(){
		student st1,st2,st3,st4;
		st1.setname("Rameez");
		cout<<endl;
		st1.setdata("20sw002","Software");
		st1.showname();
		st1.displaydata();
		/////////////
		st2.setname("Junaid_Aslam");
		cout<<endl;
		st2.setdata("20sw084","Mechanical");
		st2.showname();
		st2.displaydata();
		///////////
		st3.setname("Asif");
		cout<<endl;
		st3.setdata("20sw027","Software");
		st3.showname();
		st3.displaydata();
		//////////////////
		st4.setname("Rasheed");
		cout<<endl;
		st4.setdata("20cs016","computer_system");
		st4.showname();
		st4.displaydata();
		return 0;
	}

