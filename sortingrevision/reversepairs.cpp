#include<iostream>
#include<vector>
using namespace std;

void mergetwosortedarray(vector<long long>& nums,vector<long long>& arr1,vector<long long>& arr2){
    long long i=0;
    long long j=0;
    long long k=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<=arr2[j]){
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

int inversioncount(vector<long long>& arr1,vector<long long>& arr2){
    long long i=0;
    long long j=0;
    long long count = 0;

    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]>2*arr2[j]){
            count+=arr1.size()-i;
            j++;
        }
        else i++;
    }
    return count;
}

int mergesort(vector<long long>& nums){
    long long n= nums.size();

    if(n<=1) return 0;
    long long count = 0;
    long long n1 = n/2;
    long long n2 = n-n/2;

    vector<long long> arr1(n1);
    vector<long long> arr2(n2);
    for(long long i=0;i<arr1.size();i++){
        arr1[i] = nums[i];
    }
    for(long long i=0;i<arr2.size();i++){
        arr2[i] = nums[i+n1];
    }

    count+=mergesort(arr1);
    count+=mergesort(arr2);

    count+=inversioncount(arr1,arr2);

    mergetwosortedarray(nums,arr1,arr2);

    return count;
}

int reversepairs(vector<int>& nums){
    long long n = nums.size();
    vector<long long> numslong(nums.begin(),nums.end());

    if(nums.size()==1) return 0;

    return mergesort(numslong);
}

int main(){
    vector<int> nums = {1,3,2,3,1};

    int count =reversepairs(nums);

    cout<<count;
}