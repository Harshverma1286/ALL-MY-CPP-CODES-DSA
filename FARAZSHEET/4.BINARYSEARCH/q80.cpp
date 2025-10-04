#include<iostream>
#include<vector>
using namespace std;

int getcommon(vector<int>& nums1,vector<int>& nums2){
    int i = 0;
    int j = 0;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]==nums2[j]){
            return nums1[i];
        }
        else if(nums1[i]!=nums2[j]){
            int mn = min(nums1[i],nums2[j]);
            if(mn==nums1[i]) i++;
            else j++;
        }
    }
    return -1;
}

int main(){
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,4};

    cout<<getcommon(nums1,nums2);
}