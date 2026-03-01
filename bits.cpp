#include<iostream>
using namespace std;
int main()
{
double mb,bt;
cout<<"please enter size in mb:"<<endl;
cin>>mb;
bt=1024*1024*8*mb;
cout<<mb<<" MB is equivalent to "<<bt<<"bits";
return 0;
}
