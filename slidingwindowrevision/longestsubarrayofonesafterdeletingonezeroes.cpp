#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int longestsubarray(vector<int>& nums){
    int n = nums.size();

    int i = 0;
    int j = 0;
    int length = 0;
    int maxlength = INT_MIN;
    int k=1;
    int flips = 0;

    while(j<n){
        if(nums[j]==1) j++;
        else{
            if(flips<k){
                flips++;
                j++;
            }
            else{
                length = j-i-1;
                maxlength = max(maxlength,length);
                while(nums[i]==0)i++;
                i++;
                j++;
            }
        }
    }
    length = j-i-1;
    maxlength = max(maxlength,length);
    return maxlength;
}

int main(){
    vector<int> nums = {1,1,0,1};
    cout<<longestsubarray(nums);
}