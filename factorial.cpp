#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ! to 10 only :";
    cin>>n;

    int fact=n*(n-1)*(n-2)*(n-3)*(n-4)*(n-5)*(n-6)*(n-7)*(n-8)*(n-9);
    cout<<fact;
}