#include<iostream>
using namespace std;
int main()
{
int cp,mbr,pop;
cout<<"Enter current population:"<<endl;
cin>>cp;
cout<<"Enter the monthly birth rate(number of births per months):"<<endl;
cin>>mbr;
pop=cp+(mbr*12*30);
cout<<"Population in three decades will be :"<<pop;
return 0;
}
