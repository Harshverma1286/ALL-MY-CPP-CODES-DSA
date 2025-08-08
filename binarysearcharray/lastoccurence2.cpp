#include<iostream>
#include<vector>
using namespace std;

int lastoccurence(vector<int>& arr,int x){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            if(mid+1<arr.size() && arr[mid+1]==x ){
                low = mid+1;
            }
            else{
                return mid;
                break;
            }
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,3,3,4,4,4,5};

    int x = 4;

    cout<<lastoccurence(arr,x);
}