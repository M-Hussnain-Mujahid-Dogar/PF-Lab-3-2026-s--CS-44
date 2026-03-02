#include<iostream>
using namespace std;
int main()
{
int a,v1,v2,t;
cout<<"Enter initial velocity (ms^-1) :"<<endl;
cin>>v1;
cout<<"Enter acceleration (ms^-2) :"<<endl;
cin>>a;
cout<<"Enter time (s) :"<<endl;
cin>>t;
v2=v1+a*t;
cout<<"Final Velocity : "<<v2;
return 0;
}