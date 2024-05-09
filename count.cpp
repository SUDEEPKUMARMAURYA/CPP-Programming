#include<iostream>
using namespace std;

int main(){

    int n;
    int digit=0;
    int count=0;
    cout<<"Enter the no : ";
    cin>>n;

    while(n!=0){
        digit=n%10;
        n=n/10;
        count++;
    }
    cout<<"digit = "<<count;
    return 0;
}