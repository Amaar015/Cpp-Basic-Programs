#include<iostream>
using namespace std;
class person{
	protected:
		string name;
	public:
	void 	setname(string na)
	{name=na;}
 	void showname()
	{cout<<"your name is  \t"<<name<<endl;
	//cout<<endl;
	}
};
class employee: public person{
	
	private:
		string emplno;
			string nameduty;
			double salary;
	public:
	void	setdata(string eno,string naduty,double sal){
			emplno=eno;
			 nameduty=naduty;
			 salary=sal;
		}
		void showdata()
		{
			cout<<"the ID number of employe: "<<emplno<<endl;
			cout<<"The Designation of employe: "<<nameduty<<endl;
			cout<<"The Salary of the employee: "<<salary<<endl;
		}
}; 
int main()
{employee em1,em2,em3,em4;
cout<<"The employee\n";
em1.setname("Saqib");
em1.setdata("324","security",4000);
em1.showname();
em1.showdata();
cout<<"The employee\n";
em2.setname("Hashim");
em2.setdata("@0SE54","Teacher",100000);
em2.showname();
em2.showdata();
cout<<"The employee\n";	
em3.setname("Altaf");
em3.setdata("20lib1452","Librarerian",60000);
em3.showname();
em3.showdata();
cout<<"The employee\n";
em4.setname("Jorge");
em4.setdata("2193","sweaper",3000);
em4.showname();
em4.showdata();
	return 0;
}
