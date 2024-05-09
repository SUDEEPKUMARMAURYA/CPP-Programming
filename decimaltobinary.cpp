#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter decimal value : ";
    cin>>n;

    int digit=0;
    int deci =0;
    int count=0;
    while(n!=0){
        digit=n%2;
        n=n/2; 
    }
    if(digit>=0){
        deci=digit/10;
        cout<<deci;
    }
    return 0;
}