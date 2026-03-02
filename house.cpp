#include<iostream>
using namespace std;
int main()
{
int pa,move,avlive;
cout<<"Enter the person age :";
cin>>pa;
cout<<endl;
cout<<"Enter number of times ther moved :";
cin>>move;
cout<<endl;
avlive=pa/(1+move);
cout<<"Average number of years lived in the same house :"<<avlive;
return 0;
}