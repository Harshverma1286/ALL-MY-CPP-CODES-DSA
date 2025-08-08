#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void findingminimumsteps(vector<int> arr,int steps,int& minsteps,int target){
    if(target<0) return;
    if(target==0){
        minsteps = min(minsteps,steps);
    }
    for(int i=0;i<arr.size();i++){
        int val = target-arr[i];
        findingminimumsteps(arr,steps+1,minsteps,val);
    }
}

int minimumsteps(vector<int> arr,int target,vector<int>& dp){
    if(target<0) return INT_MAX;
    if(target==0) return 0;

    if(dp[target]!=-1) return dp[target];

    int steps =INT_MAX;
    for(int i=0;i<arr.size();i++){
        steps = min(steps,minimumsteps(arr,target-arr[i],dp));
    }
    return dp[target]=1+steps;
}

int main(){
    vector<int> arr = {1,2,5};
    int target = 11;
    vector<int> dp(1000005,-1);
    cout<<minimumsteps(arr,target,dp);
}