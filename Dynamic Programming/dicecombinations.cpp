#include<iostream>
#include<vector>
using namespace std;

int theways(int n,vector<int>& dp){
    if(n==0) return 1;

    if(dp[n]!=-1) return dp[n];

    int ways = 0;
    for(int i=1;i<=6;i++){
        if(i>n) continue;
        ways = ways+theways(n-i,dp);
    }
    return dp[n] = ways;
}

int main(){
    int n = 3;
    vector<int> dp(n+1,-1);
    cout<<theways(n,dp);
}