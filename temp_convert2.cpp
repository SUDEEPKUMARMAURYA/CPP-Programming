#include<iostream>
using namespace std;

int main(){
    float f;
    cout<<"Enter the temp in F: ";
    cin>>f;

    float c=(0.56*(f-32));

    cout<<"Temp in c :"<<endl<<c<<" C";

}