#include<iostream>
#include<vector>
using namespace std;

int numberofsubarrays(vector<int>& nums,int k){
    int n = nums.size();
    int i=0;
    int j=0;
    int count =0;
    int odd=0;
    int ans =0;
    while(j<n){
        if(nums[j]%2!=0){
            count=0;
            odd++;
        }
        while(i<=j && odd==k){
            count++;
            if(nums[i]%2!=0){
                odd--;
            }
            i++;
        }
        ans+=count;
        j++;
    }
    return ans;
}

int main(){
    vector<int> nums = {1,1,2,1,1};


    int k = 3;

    cout<<numberofsubarrays(nums,k);
}