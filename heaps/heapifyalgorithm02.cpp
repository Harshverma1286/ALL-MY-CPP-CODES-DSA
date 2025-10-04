#include<iostream>
#include<vector>
using namespace std;

void heapify(int i,vector<int>& arr,int n){
    while(true){
        int left = 2*i;
        int right = 2*i+1;

        if(left>=n) break;
        if(right>=n){
            if(arr[i]>arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            break;
        }

        if(arr[left]<arr[right]){
            if(arr[i]>arr[left]){
                swap(arr[left],arr[i]);
                i=left;
            }
            else break;
        }
        else if(arr[right]<arr[left]){
            if(arr[i]>arr[right]){
                swap(arr[i],arr[right]);
                i=right;
            }
            else break;
        }
    }
}

int main(){
    vector<int> arr = {-1,10,2,14,11,1,4};


    for(int i=arr.size()/2;i>=1;i--){
        heapify(i,arr,arr.size());
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}