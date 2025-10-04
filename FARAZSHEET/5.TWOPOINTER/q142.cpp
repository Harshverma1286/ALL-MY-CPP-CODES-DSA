#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> threesum(vector<int>& nums){
    int n = nums.size();

    vector<vector<int>> result;

    for(int i=0;i<nums.size();i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        int j = i+1;
        int k = n-1;
        while(j<k){
            int value = nums[i]+nums[j]+nums[k];

            if(value>0){
                k--;
            }
            else if(value<0){
                j++;
            }
            else{
                result.push_back({nums[i],nums[j],nums[k]});
                j++;

                while(nums[j]==nums[j-1] && j<k){
                    j++;
                }
            }
        }
    }
    return result;
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,4};

    vector<vector<int>> result = threesum(nums);

    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[0].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"  ";
    }
}