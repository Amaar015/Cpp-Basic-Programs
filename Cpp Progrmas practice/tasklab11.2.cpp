#include<iostream>
using namespace std;
class product{               //here the starting the class of product(base class
	protected:
		string name;
		float price;
		string discription;
  public:
	void setprice(string na,float pr,string dis){ name =na;
	price=pr;
	discription=dis;}

    void showprice(){
    //cout<<"your Product detail is\t\n"'
    cout<<" the name of product\t"<<name<<endl;
	cout<<" the price of product\t"<<price<<endl;
	cout<<" the discription\t"<<discription<<endl;
	}
};// ending here the class product (base class)
class Books :public product{                      // here the starting class of books (sub classs)
	protected:
		string authorname;
		string Edition;
    public:
    void	setbook(string auth,string edit){
    		authorname=auth;
    		Edition=edit;
		}
	void  showbook()
	{  cout<<"Name of the author of this book is\t"<<authorname<<endl;
	   cout<<"The Edition of the is \t"<<Edition<<endl;
		}	
};
int main(){
	Books b1,b2,b3;
	b1.setbook("Lobert_leford","Fourth");
    b1.setprice("Salman",45.50,"shop");
    b1.showprice();
    b1.showbook();
	return 0;
}
