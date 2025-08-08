#include<iostream>
#include<vector>
#include<limits.h>
#define inf INT_MAX
using namespace std;

int  minsteps(int n,vector<int>& dp){
    if(n==1) return 0;

    if(dp[n]!=-1) return dp[n];
    int ways = 1+minsteps(n-1,dp);
    if(n%2==0) ways = min(ways,1+ minsteps(n/2,dp));
    if(n%3==0) ways = min(ways,1+minsteps(n/3,dp));

    return dp[n] = ways;
}

int main(){
    int  n = 15;
    vector<int> dp(n+1,-1);
    cout<<minsteps(n,dp);
}