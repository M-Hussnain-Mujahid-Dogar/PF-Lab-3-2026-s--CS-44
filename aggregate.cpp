#include<iostream>
using namespace std;
int main()
{
float e,m,i,ag;
string name;
cout<<"enter your name"<<endl;
cin>>name;
cout<<"Enter matriculation marks (out of 1100):"<<endl;
cin>>m;
cout<<"Enter intermediate marks (out of 550):"<<endl;
cin>>i;
cout<<"enter ecat marks :"<<endl;
cin>>e;
ag=(m/1100*10)+(i/550*40)+(e/400*50);
cout<<"Aggregate score for "<<name<<" is "<<ag<<" %";
return 0;
}
