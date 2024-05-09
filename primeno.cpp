#include<iostream>

using namespace std;

int main(){
    int n;
    int i=1;

    cout<<"Enter the no."<<endl;
    cin>>n;

    while(i<=n){
        if(n%i==0){
            cout<<n<<" is not prime no. for "<<i<<endl;
        }
        else{
            cout<<n<<" is prime no.for "<<i<<endl;
        }
        i=i+1;
    }



    return 0;
}