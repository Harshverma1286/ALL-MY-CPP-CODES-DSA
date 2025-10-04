#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {10,20,30,40,50,60,70,80};
    int target = 40;

    int low = 0;
    int high = 1;
    while(high<arr.size() && arr[high]<target){
        low =high;
        high = high*2;
    }
    if(high>=arr.size()-1){
        high = arr.size()-1;
    }
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            cout<<mid;
            break;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
}