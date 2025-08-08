#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,3,4,4,4,5};
    int n = 8;
    int low = 0;
    int high = n-1;
    int target = 4;
    bool flag = false;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            if(arr[mid+1]!=target){
                flag=true;
                cout<<mid;
                break;
            }
            else low=mid+1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else high = mid-1;


    }
    if(flag==false) cout<<-1;
}