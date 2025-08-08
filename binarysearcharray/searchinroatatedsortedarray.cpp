#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr,int target){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
            break;
        }
        else if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(target>arr[mid] && target<=arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {33,28,1,3,4,8,20};
    int target = 8;

    cout<<search(arr,target);
}