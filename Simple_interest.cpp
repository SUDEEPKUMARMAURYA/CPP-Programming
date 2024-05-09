#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;
     cout<<"Enter Principal Amount : ";
     cin>>p;
     cout<<"Enter rate  : ";
     cin>>r;
     cout<<"Enter Time : ";
     cin>>t;

     si=(p*r*t)/100;
     cout<<"Simple Interest is  : "<<si;
}