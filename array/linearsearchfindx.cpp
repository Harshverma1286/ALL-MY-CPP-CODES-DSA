#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int x;
    cout<<"enter x value that is to be found in the array : ";
    cin>>x;
    int arr[n];
    cout<<"enter the element in the array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        if(x==arr[i]){
            cout<<arr[i]<<" value is present in the array ";
        }
    }
    cout<<"the given value "<<x<<"is not present in the array";
}