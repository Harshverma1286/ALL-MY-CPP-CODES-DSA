#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int getcommon(vector<int>& nums1,vector<int>& nums2){
    for(int i=0;i<nums2.size();i++){
        int low = 0;
        int high = nums1.size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums1[mid]==nums2[i]){
                return nums2[i];
            }
            else if(nums1[mid]<nums2[i]){
                low = mid+1;
            }
            else high = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 ={2,4};

    cout<<getcommon(nums1,nums2);
}