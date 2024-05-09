#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Ram age :";
    cin>>a;
    cout<<"Enter Shyam age :";
    cin>>b;
    cout<<"Enter Ajay age :";
    cin>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<"Ram is youngest ";
        }
        else
        {
            cout<<"Ajay is youngest";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"Shyam is youngest";
        }
        else
        {
            cout<<"Ajay is youngest";
        }
    }
}