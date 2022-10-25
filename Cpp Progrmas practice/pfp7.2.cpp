#include<iostream>
using namespace std;
int main(){
	float angle_A,angle_B,angle_C;
	cout<<"Note: The sum of entered Angle is must equal to=180\n\n";
	cout<<"the Angle A=\t";cin>>angle_A;
	cout<<"the Angle B=\t";cin>>angle_B;
	cout<<"the Angle C=\t";cin>>angle_C;
	if(angle_A+angle_B+angle_C<180){
		cout<<endl;
		cout<<"This is not a triangle\t";
		cout<<endl;
	}
	else if(angle_A==90||angle_B==90||angle_C==90){
		cout<<"The Triangle is Right-angle\t"<<"A = "<<angle_A<<"\tB="<<angle_B<<"\tC="<<angle_C<<endl;
		cout<<endl;
	}
	else if((angle_A>90&&angle_B<90&&angle_C<90)||(angle_A<90&&angle_B>90&&angle_C<90)||(angle_A<90&&angle_B<90&&angle_C>90)){
		cout<<"The Triangle is Obtuse angle\t"<<"A = "<<angle_A<<"\tB="<<angle_B<<"\tC="<<angle_C<<endl;
		cout<<endl;
	}
	else if(angle_A<90&&angle_B<90&& angle_C<90){
		cout<<"The Triangle is Acute-angle\t"<<"A = "<<angle_A<<"\tB="<<angle_B<<"\tC="<<angle_C<<endl;
		cout<<endl;
	}
	
	
	return 0;
	
}
