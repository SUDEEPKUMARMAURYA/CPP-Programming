#include<iostream>
using namespace std;
int main(){

    double si,p,r,t;
    cout<<"Enter the Principle Amount: ";
    cin>>p;
    cout<<"Enter the Rate: ";
    cin>>r;
    cout<<"Enter the Time: ";
    cin>>t;

    si=(p*r*t)/100;

    cout<<"Simple Intrest = : "<<si;
}