#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no. : ";
    cin>>n;

    if((n%3==0) || (n%5==0) && (n%15!=0))
    {
        cout<<n<<" is divisible by 3 or 5 ";
    }
    else
    {
        cout<<n<<" not divisible by 3 or 5";
    }
}