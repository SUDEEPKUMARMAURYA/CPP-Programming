#include<iostream>
using namespace std;
int main()
{
    int x = 5;
 
    cout<<x<<endl<<"\n";
    x=8;      // x become overright
    cout<<x<<"\n\n";
    // x=x+2;    //= is a assignment oprator not equal
    x+=2;
    cout<<x<<endl;
    // x=x-4;
    x-=4;
    cout<<x<<endl;
    // x=x*2;
    x*=2;
    cout<<x<<endl;
    // x=x/4;
    x/=4;
    cout<<x<<endl;

}