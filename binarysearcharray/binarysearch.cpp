#include<iostream>
using namespace std;

int main(){
    int arr[]= {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    bool flag = false;

    int target = 4;

    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            flag = true;
            break;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    if(flag == true){
        cout<<"element is present ";
    }
    else{
        cout<<"element is  not present";
    }
}