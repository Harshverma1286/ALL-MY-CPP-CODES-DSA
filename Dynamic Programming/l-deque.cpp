#include<iostream>
#include<vector>
using namespace std;

int thewinner(vector<int> ans,int i,int j,vector<vector<int>>& dp){
    if(i==j) return ans[i];

    if(dp[i][j]!=-1) return dp[i][j];

    int maxans = max(ans[i]-thewinner(ans,i+1,j,dp),ans[j]-thewinner(ans,i,j-1,dp));

    return dp[i][j] = maxans;
}

int main(){
    vector<int> ans = {9,8,6};

    int i=0;
    int j = ans.size()-1;
    vector<vector<int>> dp(100,vector<int>(100,-1));

    cout<<thewinner(ans,i,j,dp);
}
