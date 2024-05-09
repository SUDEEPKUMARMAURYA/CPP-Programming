#include<iostream>
using namespace std;

int main(){

    int n,i,j;
    i=1;
   

    cout<<"Enter the  no : ";
    cin>>n;

    while(i<=n){
         j=1;
        while(j<=i){
            cout<<i<<" ";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
        
    }





    return 0;
}