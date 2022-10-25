#include<iostream>
using namespace std;
class product{
	protected:
		string name;
		float price;
		string description;
		public:

		  void getproduct()
		  {cout<<"enter the name of product\t";
		  cin>>name;
		  cout<<endl;
		  cout<<"enter the price of your product\t";
		  cin>>price;
		  cout<<endl;
		  cout<<"enter the discription product\t";
		  	cin>>description;
		  }
	};//ending product class//
		class medicine : public product{
			private:
				string magdate;
				string expdate;
			public:
				void setmgdate(string md)
				{magdate=md;	}
                void showmgdate(){cout<<"the Magnification Date\t"<<magdate<<endl; }
                void setexpdate(string ed)
                {expdate=ed; }
                void showdate(){cout<<"The Expiray Date\t"<<expdate<<endl;}
		};//ending medicine class //
		int main(){
		medicine m1,m2,m3;	
		m1.setmgdate("23/04/2014");
		m1.setexpdate("23/06/2021");
		m1.getproduct();    
		m1.showmgdate();
		m1.showdate();
		return 0;
		}  


