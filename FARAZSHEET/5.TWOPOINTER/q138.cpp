#include<iostream>
#include<vector>
using namespace std;

vector<int> rotatethearray(vector<int>& nums,int i,int j){
    while(i<=j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    return nums;
}

void rotate(vector<int>& nums,int k){
    int n = nums.size();

    if(k>n) k=k%n;

    rotatethearray(nums,0,n-1);
    rotatethearray(nums,0,k-1);
    rotatethearray(nums,k,n-1);
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};

    int k = 3;

    rotate(nums,k);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}