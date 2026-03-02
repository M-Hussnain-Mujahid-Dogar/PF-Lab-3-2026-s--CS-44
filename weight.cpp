#include<iostream>
using namespace std;
int main()
{
string name;
float kg;
cout<<"Enter your name please :"<<endl;
cin>>name;
cout<<"Now please enter the target weight to lose in kilograms :"<<endl;
cin>>kg;
int days=kg*15;
cout<<name<<" will need "<<days<<" to lose "<<kg<<" kilograms weight ";
return 0;
}