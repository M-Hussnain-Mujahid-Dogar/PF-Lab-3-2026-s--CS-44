#include<iostream>
using namespace std;
int main()
{
string name;
int ap,cp,as,cs,per;
cout<<"Enter name of movie :"<<endl;
cin>>name;
cout<<"Enter the price of adult ticket :"<<endl;
cin>>ap;
cout<<"Enter the price of child ticket :"<<endl;
cin>>cp;
cout<<"Enter the number of adult tickets sold :"<<endl;
cin>>as;
cout<<"Enter the number of child tickets sold :"<<endl;
cin>>cs;
cout<<"Enter the percentage of total money to donate to charity :"<<endl;
cin>>per;
cout<<"\n"<<endl;
int totalearn=ap*as+cp*cs;
float ch=totalearn*per/100;
float remain=totalearn-ch;
cout<<"Movie : Avengers "<<endl;
cout<<"Total money earned from all the tickets is :$"<<totalearn<<endl;
cout<<"Money given to charity ("<<per<<"% ) is :$"<<ch<<endl;
cout<<"Remaining money earned after donation is :$"<<remain;
return 0;
}
