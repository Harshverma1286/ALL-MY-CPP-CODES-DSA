#include<iostream>
#include<vector>
using namespace std;

int numofsubarrays(vector<int>& arr,int k,int threshold){
    int n = arr.size();
    int prevsum = 0;
    int count = 0;
    int average = 0;
    for(int i=0;i<k;i++){
        prevsum+=arr[i];
    }
    average = prevsum/k;
    if(average>=threshold) count++;
    int i=1;
    int j=k;
    while(j<n){
        prevsum = prevsum+arr[j]-arr[i-1];
        average = prevsum/k;
        if(average>=threshold)count++;
        i++;
        j++;
    }
    return count;
}

int main(){
    vector<int> arr = {2,2,2,2,5,5,5,8};
    int threshold = 4;
    int k = 3;

    cout<<numofsubarrays(arr,k,threshold);
}