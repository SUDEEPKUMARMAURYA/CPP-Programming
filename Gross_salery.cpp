#include<iostream>
using namespace std;
int main(){
    int sal;
    cout<<"Enter the salary : Rs. ";
    cin>>sal;

    int gross=(sal+(sal*18)/100);
    
    cout<<"Gross salary plus 18% extra :"<<endl<<"Rs. "<<gross;

    return 0;
}