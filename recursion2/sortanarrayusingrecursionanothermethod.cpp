#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int>& arr,int temp){
    if(arr.size()==0 || arr[arr.size()-1]<=temp){
        arr.push_back(temp);
        return;
    }
    int val = arr[arr.size()-1];
    arr.pop_back();
    insert(arr,temp);
    arr.push_back(val);
}

void sortarr(vector<int>& arr){
    if(arr.size()==1) return;

    int temp = arr[arr.size()-1];
    arr.pop_back();
    sortarr(arr);
    insert(arr,temp);
}

int main(){
    vector<int> arr = {5,1,4,2,3};
    sortarr(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}