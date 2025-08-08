#include<iostream>
using namespace std;

int duplicatenumbers(int arr[],int n ){
    int low = 0;
    int high = n-1;
    int ans = 0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>mid+1){
            ans = arr[mid];
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int duplicate = duplicatenumbers(arr,n);

    cout<<duplicate<<endl;
    return 0;
}