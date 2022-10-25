#include<iostream>
using namespace std;

int main (){

int tshirt,shirts,dpaints,jeans,belts,ties,Ptshirt=1550,Pshirts=1750,Pdpaints=2100,Pjeans=4500,Pbelts=2150,Pties=1100;
float S,TS,DP,J,B,T;
int Ss,TSs,DPs,Js,Bs,Ts;
float Rs,dRs;
char ch;
cout<<"welCome to Diners\n\n\n";
cout<<"Enter the customer type Register (R) Or Normal (N) :   ";cin>>ch;
cout<<"Enter the number of shirts purchase  :                 ";cin>>shirts;
cout<<"Enter The Number of T-shirts purchased :               ";cin>>tshirt;
cout<<"Enter the number of Dress Paints Puchased :            ";cin>>dpaints;
cout<<"Enter the number of Jeans purchased :                  ";cin>>jeans;
cout<<"Enter the number of Belts Purchase :                   ";cin>>belts;
cout<<"Enter the number of Ties Purchased :                   ";cin>>ties;
S=shirts*Pshirts*50/100;
TS=tshirt*Ptshirt*50/100;
DP=dpaints*Pdpaints*40/100;
J=jeans*Pjeans*30/100;
B=belts*Pbelts*40/100;
T=ties*Pties*40/100;
dRs=S+TS+DP+J+B+T;
////////////////////////////////////
Ss=shirts*Pshirts;
TSs=tshirt*Ptshirt;
DPs=dpaints*Pdpaints;
Js=jeans*Pjeans;
Bs=belts*Pbelts;
Ts=ties*Pties;
Rs=Ss+TSs+DPs+Js+Bs+Ts;
cout<<"\n\n\n\n";
if(ch=='R' ) 
{
	cout<<"Customer Type = Register        \n";
	cout<<"Actual Bill = Rs.               "<<Rs<<endl;
	cout<<"Total Bill After Discount = Rs. "<<dRs;
}
else if(ch=='N'){
 cout<<"Customer Type = Normal       \n";
	cout<<"Actual Bill = Rs.                "<<Rs<<endl;
	cout<<"Total Bill After Discount = Rs.  "<<dRs;
	
}
return 0;
}

