#include<iostream>
using namespace std;
int main()
{
    int cp,sp;

    cout<<"Enter the cost price : ";
    cin>>cp;
    cout<<"\n";

    cout<<"Enter the selling price : ";
    cin>>sp;

    cout<<endl;
    if(sp>cp)
    {
        cout<<"Profit is : "<<sp-cp;
    }
    else if(cp>sp)
    {
        cout<<"Loss is : "<<cp-sp;
    }
    else
    {
        cout<<"No profit no loss ";
    }
}