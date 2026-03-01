#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
float i,p;
cout<<"Enter imposters :"<<endl;
cin>>p;
cout<<"Enter players :"<<endl;
cin>>i;
int c=100*(i/p);
cout<<" Total chance :"<<c;
return 0;
}