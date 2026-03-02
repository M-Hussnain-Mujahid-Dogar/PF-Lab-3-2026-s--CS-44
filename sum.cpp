#include<iostream>
using namespace std;
int main()
{
int i,a,b,c,d;
cout<<"Enter a fout digit number :";
cin>>i;
cout<<endl;
a=i%10;
i/=10;
b=i%10;
i/=10;
c=i%10;
i/=10;
d=i%10;
int sum=a+b+c+d;
cout<<"sum is "<<sum;
return 0;
}
