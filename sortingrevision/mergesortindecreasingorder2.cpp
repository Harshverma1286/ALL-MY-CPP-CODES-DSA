#include<iostream>
#include<vector>
using namespace std;

void mergetwosortedarray(vector<int>& nums,vector<int>& arr1,vector<int>& arr2){
    int i=0;
    int j=0;
    int k=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]>=arr2[j]){
            nums[k]=arr1[i];
            k++;
            i++;
        }
        else{
            nums[k]=arr2[j];
            k++;
            j++;
        }
    }
    if(i>arr1.size()-1){
        while(j<arr2.size()){
            nums[k]=arr2[j];
            k++;
            j++;
        }
    }
    else{
        while(i<arr1.size()){
            nums[k]=arr1[i];
            k++;
            i++;
        }
    }
}

void mergesort(vector<int>& nums){

    int n = nums.size();

    if(n==1) return;

    int n1 = n/2;
    int n2 = n-n/2;

    vector<int> arr1(n1);
    vector<int> arr2(n2);

    for(int i=0;i<arr1.size();i++){
        arr1[i]=nums[i];
    }
    for(int i=0;i<arr2.size();i++){
        arr2[i] = nums[i+n1];
    }

    mergesort(arr1);
    mergesort(arr2);

    mergetwosortedarray(nums,arr1,arr2);
}

int main(){
    vector<int> nums = {1,2,3,4,5};

    mergesort(nums);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}