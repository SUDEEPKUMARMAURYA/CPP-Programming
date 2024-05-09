#include<iostream>
using namespace std;
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    cout<<"All sub. 100 marks"<<endl;
    cout<<"Enter 1st sub. mark : ";
    cin>>sub1;
    cout<<"Enter 2nd sub. mark : ";
    cin>>sub2;
    cout<<"Enter 3rd sub. mark : ";
    cin>>sub3;
    cout<<"Enter 4th sub. mark : ";
    cin>>sub4;
    cout<<"Enter 5th sub. mark : ";
    cin>>sub5;

    double total=(sub1+sub2+sub3+sub4+sub5);
    double per=(total/500)*100;
    cout<<"Percentage of all sub. :"<<per<<" %";
   


}