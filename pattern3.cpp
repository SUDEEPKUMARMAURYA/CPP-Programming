#include<iostream>
using namespace std;

int main(){
    int i,j,n;
        // i=1;
    cout<<"Enter a no: ";
    cin>>n;
    //  while (i<=n){
    //     j=1;
    //     while(j<=i){
    //         cout<<"*"<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    //  }

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*"<<" ";    
        }
        cout<<endl;
    }

    return 0;
}