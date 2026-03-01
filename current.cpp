#include<iostream>
using namespace std;
int main()
{
float I,Q,T;
cout<<"Enter charge in coulombs:"<<endl;
cin>>Q;
cout<<"Enter the time:"<<endl;
cin>>T;
I=Q/T;
cout<<"The current is = "<<I<<"ampheres";
return 0;
}