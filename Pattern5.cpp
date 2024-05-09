#include<iostream>
using namespace std;

int main(){

    int n,i,j;
    i=1;
    cout<<"Enter a no : ";
    cin>>n;
    

    // while(i<=n){
    //     j=1;
    //     while(j<=i){
    //         cout<<j<<" ";
    //         j=j+1;

    //     }
    //     i=i+1;
    //     cout<<endl;
    // }
    int value=i;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<value<<" ";
            value=value+1;
            j=j+1;

        }
        i=i+1;
        cout<<endl;
    }






    return 0;
}