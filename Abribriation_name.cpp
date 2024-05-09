#include<iostream>
using namespace std;
int main(){
    char Fname[20],Mname[20],Lname[20];

    cout<<"Enter full name : ";
    cin>>Fname>>Mname>>Lname;

    cout<<"Abribriation Name : ";
    cout<<Fname[0]<<"."<<Mname[0]<<"."<<Lname;
}