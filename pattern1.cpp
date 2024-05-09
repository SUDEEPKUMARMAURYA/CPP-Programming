#include<iostream>
using namespace std;

int main(){

int n,i,j;

cout<<"Enter a no: ";
cin>>n;
  /*  i=1;          //for 123
while(i<=n){
    j=1;
    while(j<=n){
        cout<<j;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/
//reverse like 321
    i=1;
while(i<=n){
    j=1;
    while(j<=n){
        cout<<n-j+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
   return 0;
}