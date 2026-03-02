#include<iostream>
using namespace std;
int main()
{
int sq,w,h,walls;
cout<<"Number of square meters you can paint :";
cin>>sq;
cout<<endl;
cout<<"Width of the single wall (in meters) :";
cin>>w;
cout<<endl;
cout<<"Height of the single wall (in meters) :";
cin>>h;
cout<<endl;
walls=sq/(w*h);
cout<<"Number of walls you can paint :"<<walls;
return 0;
}