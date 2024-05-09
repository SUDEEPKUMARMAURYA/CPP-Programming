#include<iostream>
using namespace std;

int main(){

    int n,x=1;
    int digit=0;
    int res=0;
    cout<<"Enter binary no : ";
    cin>>n;

    while(n>0){
        digit=n%10;
        res=res+(digit*x);
        x=x*2;
        n=n/10;
    }
    cout<<"decimal = "<<res;
    return 0;
}