#include<iostream>
using namespace std;
class calculate{
	private:
		int num1;
		int num2;
		public:
		void getsum(){ cout<<"enter the number1 for sumation\t";
		cin>>num1;
		cout<<"enter the number 2 for sumation\t";
		cin>>num2;
		}
		void showsum()
		{cout<<"the sumation of the number\t"<<num1+num2<<endl;}
		//////////////////////sum function ended///////////////
		void getminus(){ cout<<"enter the number 1 for substraction\t";
		cin>>num1;
		cout<<"enter the number 2 for substraction\t";
		cin>>num2;
		}
		void showminus(){cout<<"the substraction of number 1 and 2 is \t"<<num1-num2<<endl;}
		/////////////////////substration function ended////////
		void getmult(){cout<<"enter the number 1 for multiplication\t";
		cin>>num1;
		cout<<"enter the number 2 for multiplication\t";
		cin>>num2;
		}
		void showmult(){cout<<"the multiplication of number 1 and 2 is \t"<<num1*num2<<endl;}
		/////////////////////////////the multiplication ended here
	    void getdivision(){
		cout<<"enter the number 1 for Division\t";
		cin>>num1;
		cout<<"enter the number 2 for Division\t";
		cin>>num2;
		}
		void showdivision(){cout<<"the division of number 1 and 2 is \t"<<num1/num2<<endl;}
			
		
};
int main()
{
	calculate s,m,p,d;
	cout<<"the summation is \n";
s.getsum();
s.showsum();
cout<<"the substraction is \n";
m.getminus();
m.showminus();
cout<<"the Multiplication is \n";
p.getmult();
p.showmult();
cout<<"the division is \n";
d.getdivision();
d.showdivision();
return 0;
}
