#include<iostream>
using namespace std;
class number{
	private:
		int num,numb;
	public:
		number():num(0),numb(0){
			
		}
		void getnum(){
			cout<<"enter the number\t";cin>>num;
	//		cout<<"entr the number:\t";cin>>numb;
		}
		void getnumb(){
	cout<<"entr the number:\t";cin>>numb;
			
		}
		void display(){
			cout<<num<< "/"<<numb<<" ="<<((num)<(numb))<<endl;	
		}
		void disply(){
			cout<<num<< "/"<<numb<<" ="<<((num)>(numb))<<endl;	
		}
		number operator >(number obj){
			number temp;
			temp.num=num+obj.num;
			temp.numb=numb+obj.numb;
			return (temp);
			
}
number operator <(number obj){
			number temp;
			temp.num=num+obj.num;
			temp.numb=numb+obj.numb;
			return (temp);
			
}
};
int main(){
	number n1,n2,n3,n4;
	n1.getnum();
 n2.getnumb();
 n3=	n1>n2;
 n4=n1<n2;
 n3.disply();
 n4.display();
 return 0;
}
