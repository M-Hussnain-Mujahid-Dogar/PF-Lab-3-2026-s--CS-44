#include<iostream>
using namespace std;
int main()
{
int size,area,bagcost;
cout<<"Enter size of fertilizer in pounds :"<<endl;
cin>>size;
cout<<"Enter cost of bag :$"<<endl;
cin>>bagcost;
cout<<"Enter area in square feet that can be covered by fertilizer :"<<endl;
cin>>area;
float costp=bagcost/size;
float costsq=bagcost/area;
cout<<"Cost per pound is $"<<costp<<endl;
cout<<"Cost per square feet is $"<<costsq;
return 0;
}

