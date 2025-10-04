#include<iostream>
#include<vector>
using namespace std;

int findkthrotation(vector<int>& arr){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(mid<n-1 && arr[mid]>arr[mid+1]){
            return mid+1;
        }
        else if(mid<n-1 && arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
            return mid;
        }
        else if(mid<n-1 && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid+1;
        }
        else if(arr[low]>=arr[mid]){
            high = mid-1;
        }
        else low = mid+1;
    }
    return 0;
}

int main(){
    vector<int> arr = {5,1,2,3,4};
    cout<<findkthrotation(arr);
}