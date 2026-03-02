#include<iostream>
using namespace std;
int main()
{
int a1,a2,a3,a4,a5,m1,m2,m3,m4,m5,s1,s2,s3,s4,s5;
cout<<"Number 1: ";cin>>a1;cout<<endl;
cout<<"Number 2: ";cin>>a2;cout<<endl;
cout<<"Number 3: ";cin>>a3;cout<<endl;
cout<<"Number 4: ";cin>>a4;cout<<endl;
cout<<"Number 5: ";cin>>a5;cout<<endl;
cout<<"Number 6: ";cin>>m1;cout<<endl;
cout<<"Number 7: ";cin>>m2;cout<<endl;
cout<<"Number 8: ";cin>>m3;cout<<endl;
cout<<"Number 9: ";cin>>m4;cout<<endl;
cout<<"Number 10: ";cin>>m5;cout<<endl;
cout<<"Number 11: ";cin>>s1;cout<<endl;
cout<<"Number 12: ";cin>>s2;cout<<endl;
cout<<"Number 13: ";cin>>s3;cout<<endl;
cout<<"Number 14: ";cin>>s4;cout<<endl;
cout<<"Number 15: ";cin>>s5;cout<<endl;
int sum=a1+a2+a3+a4+a5;
int mul=m1*m2*m3*m4*m5;
int sub=s1-s2-s3-s4-s5;
cout<<(sum+mul)-sub;
return 0;
}