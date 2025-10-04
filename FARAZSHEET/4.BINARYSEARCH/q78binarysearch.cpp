#include<iostream>
#include<vector>
using namespace std;

int kthpositivemissingnumber(vector<int>& arr,int k){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]-(mid+1)<k){
            low = mid+1;
        }
        else high = mid-1;
    }
    return low+k;
}

int main(){
    vector<int> arr = {2,3,4,7,11};
    int k = 5;

    cout<<kthpositivemissingnumber(arr,k);

}