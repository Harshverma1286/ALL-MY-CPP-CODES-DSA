#include<iostream>
using namespace std;

int main(){
    int arr[] = {50,40,30,20,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 10;


    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            cout<<mid;
            break;
        }
        else if(arr[mid]>target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
}