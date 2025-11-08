#include<iostream>
#include<vector>
using namespace std;

int countofsubsetwithgiventarget(vector<int>& arr,int target,int i,int count,vector<vector<int>>& dp){
    if(i==0){
         return (target == 0) ? 1 : 0;
    }

    if(dp[i][target]!=-1) return dp[i][target];

    if(arr[i-1]<=target){
        return dp[i][target] =  countofsubsetwithgiventarget(arr,target-arr[i-1],i-1,count,dp)+countofsubsetwithgiventarget(arr,target,i-1,count,dp);
    }
    else return dp[i][target] =  countofsubsetwithgiventarget(arr,target,i-1,count,dp);
}

int main(){
    vector<int> arr = {2,3,5,6,8,10};

    int target = 10;

    vector<vector<int>> dp(arr.size()+1,vector<int>(target+1,-1));

    int count = 0;

    int i = arr.size();

    cout<<countofsubsetwithgiventarget(arr,target,i,count,dp);
}