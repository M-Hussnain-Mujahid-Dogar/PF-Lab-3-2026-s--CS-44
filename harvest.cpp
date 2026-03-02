#include<iostream>
using namespace std;
int main()
{
float vp,fp;
int vk,fk;
cout<<"Enter vegetable price per kilogram (in coins) : ";
cin>>vp;
cout<<endl;
cout<<"Enter fruit price per kilogram (in coins) : ";
cin>>fp;
cout<<endl;
cout<<"Enter total kilograms of vegetables :";
cin>>vk;
cout<<endl;
cout<<"Enter total kilograms of fruits :";
cin>>fk;
cout<<endl;
float total=vp*vk+fp*fk;
float rps=total/1.94;
cout<<"Total income in rupees is "<<rps;
return 0;
}
