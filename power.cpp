#include<iostream>
using namespace std;
int main()
{
float v,i,p;
cout<<"Enter voltage ( in volts):"<<endl;
cin>>v;
cout<<"Enter current (in amp):"<<endl;
cin>>i;
p=i*v;
cout<<"The power is "<<p<<" watts";
return 0;
}