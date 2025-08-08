#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> foursum(vector<int>& nums,int target){
    sort(nums.begin(),nums.end());
    vector<vector<int>> result;

    for(int i=0;i<nums.size();i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<nums.size();j++){
            if(j>i+1 && nums[j]==nums[j-1]) continue;
            int k = j+1;
            int m = nums.size()-1;

            while(k<m){
                int value = nums[i]+nums[j]+nums[k]+nums[m];
                if(value==target){
                    result.push_back({nums[i],nums[j],nums[k],nums[m]});
                    k++;
                    while(k<m && nums[k]==nums[k-1]){
                        k++;
                    }
                }
                else if(value<target){
                    k++;
                }
                else m--;
            }
        }
    }
    return result;
}

int main(){
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;

    vector<vector<int>> result = foursum(nums,target);

    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[0].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"  ";
    }
}