#include<iostream>
using namespace std;
int main()
{
int i,p;
cout<<"Enter imposters :"<<endl;
cin>>i;
cout<<"Enter players :"<<endl;
cin>>p;
int chance = 100 * i/p;
cout<<"chance of being imposter "<<chance<<" %";
return 0;
}