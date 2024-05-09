#include<iostream>
using namespace std;
int main()
{
    int x;

    cout<<"Enter a no : ";
    cin>>x;

    float y = (float) x;  //Typecasting

    y=y/2;

    cout<<"Half no : "<<y;

}