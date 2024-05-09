#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int i,arr[n];
    cout<<"Enter the elements of Array :"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array is :"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int j,temp;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            } 
          
        }
    
        cout<<"\nThe sorted Array is: "<<endl;
        for(i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

        int largest=arr[n-1];

        cout<<endl<<"Largest Value is : "<<largest;

        int smallest=arr[0];

        cout<<endl<<"Smallest Value is : "<<smallest;
    return 0;
}