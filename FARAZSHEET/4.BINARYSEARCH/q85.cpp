#include<iostream>
#include<vector>
using namespace std;

int peakindexinmountainarray(vector<int>& arr){
    int n = arr.size();

    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;

        if(mid==0){
            if(arr[mid]>arr[mid+1]){
                return mid;
            }
            else return mid+1;
        }
        else if(mid==n-1){
            if(arr[mid]<arr[mid-1]){
                return mid-1;
            }
            else return mid;
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
            low = mid+1;
        }
        else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {0,1,0};

    cout<<peakindexinmountainarray(arr);
}