#include<iostream>
#include<vector>
using namespace std;

bool checksubsetsum(vector<int>& arr,int target,int i,vector<vector<int>>& dp){
    if(i<0 || target<0) return false;
    if(target==0) return true;

    if(dp[i][target]!=false) return dp[i][target];

    if(arr[i-1]<=target){
        return dp[i][target] = checksubsetsum(arr,target-arr[i-1],i-1,dp) || checksubsetsum(arr,target,i-1,dp);
    }
    else return dp[i][target] = checksubsetsum(arr,target,i-1,dp);
}

int main(){
    vector<int> arr = {2,3,7,8,10};

    int target = 11;

    vector<vector<int>> dp(arr.size()+1,vector<int>(target+1,false));

    int i = arr.size();

    if(checksubsetsum(arr,target,i,dp)){
        cout<<"yes subset sum is present !!";
    }
    else{
        cout<<"no subset sum is not present !!";
    }
}