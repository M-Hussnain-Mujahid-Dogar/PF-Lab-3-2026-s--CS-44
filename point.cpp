#include<iostream>
using namespace std;
int main()
{
int win,lose,draw,point;
cout<<"Enter the number of wins:"<<endl;
cin>>win;
cout<<"Enter the number of draws:"<<endl;
cin>>draw;
cout<<"Enter the number of loses:"<<endl;
cin>>lose;
point=win*3+lose*0+draw*1;
cout<<"Pakistan has obtained "<<point<<" in Asia cup Tournament";
return 0;
}