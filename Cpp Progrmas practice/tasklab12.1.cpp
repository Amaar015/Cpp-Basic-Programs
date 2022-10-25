#include<iostream>
using namespace std;
class multiply{
	private:
		int num;
		int nu;
	public:
		multiply():num(0),nu(0)
		{/* here the constructor use and innitialization the variables with 0 */}
		void getnum()
		{cout<<"enter the number1:\t";
		cin>>num;
		}
		void getnu()
		{cout<<"enter the number2:\t";cin>>nu;
		}
		void display(){
			cout<<"the multiplication is \t"<<num*nu<<endl;
		}
		multiply operator *(multiply obj){
			multiply temp;
			temp.num=num+obj.num;
			temp.nu=nu+obj.nu;
			return temp;
			
		}
};
int main(){
	multiply n1,n2,n3,n4;
	n1.getnum();
	n2.getnu();
	n3=n1*n2;
	n3.display();

}
