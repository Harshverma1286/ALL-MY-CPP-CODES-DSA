#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

bool check(vector<int>& nums,int mid,int threshold){
    int value = mid;
    int count = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%value==0){
            count+=nums[i]/value;
        }
        else{
            count+=nums[i]/value +1;
        }
    }
    if(count>threshold) return false;
    else return true;
}

int smallestdivisor(vector<int>& nums,int threshold){
    int n = nums.size();

    int max = INT_MIN;

    for(int i=0;i<nums.size();i++){
        if(max<nums[i]){
            max = nums[i];
        }
    }

    int low =0;
    int high = max;
    int ans = 0;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(check(nums,mid,threshold)==true){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;

}

int main(){
    vector<int> nums = {1,2,5,9};

    int threshold = 6;

    cout<<smallestdivisor(nums,threshold);
    
}