#include<iostream>
#include<vector>
using namespace std;

void sortarr(vector<int>& arr,int i,int j){
    if(i==arr.size()-1) return;
    if(arr[i]>arr[j] && j<arr.size()){
        swap(arr[i],arr[j]);
        sortarr(arr,i,j+1);
    }
    else if(arr[i]<arr[j] && j<arr.size()){
        sortarr(arr,i,j+1);
    }
    else{
        sortarr(arr,i+1,i+2);
    }
}

int main(){
    vector<int> arr = {3};
    int i=0;

    sortarr(arr,i,i+1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}