#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int longestones(vector<int>& nums,int k){
    int n = nums.size();
    int i = 0;
    int j = 0;
    int length = 0;
    int maxlength = INT_MIN;
    int flips = 0;

    while(j<n){
        if(nums[j]==1) j++;
        else{
            if(flips<k){
                flips++;
                j++;
            }
            else{
                length = j-i;
                maxlength = max(maxlength,length);
                while(nums[i]==1) i++;
                i++;
                j++;
            }
        }
    }
    length = j-i;
    maxlength = max(maxlength,length);

    return (maxlength==INT_MIN) ? 0 : maxlength;
}

int main(){
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};

    int k = 2;

    cout<<longestones(nums,k);
}