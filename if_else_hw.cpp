#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Check divisibility by 5 "<<endl;
    cout<<"Enter a no : ";
    cin>> n;

    if(n%5==0)
    {
        cout<<"Divisible by 5 "<<endl;
    }
    else
    {
        cout<<"Not divisible by 5 ";
    }
}