#include<iostream>
using namespace std;

void sortthearray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {0,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortthearray(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int firstnumber = 0;
    int secondnumber = 0;

    int finalsum = 0;

    for(int i=0;i<n;i++){
        if(i%2==0){
            firstnumber=(firstnumber*10)+arr[i];
        }
        else{
            secondnumber =(secondnumber*10)+arr[i];
        }
    }
    finalsum = firstnumber+secondnumber;

    cout<<"The Minimum Sum Is : "<<finalsum;

    return 0;

}