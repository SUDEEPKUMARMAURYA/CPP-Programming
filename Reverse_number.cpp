#include<iostream>

using namespace std;

int main()
{
    int num,rem;
    cout<<"Reverse the number "<<endl;
    cout<<"Enter the number : ";
    cin>>num;
    while (num!=0)
    {
        rem=num%10;
        cout<< rem;
        num=num/10;
    }

    
}