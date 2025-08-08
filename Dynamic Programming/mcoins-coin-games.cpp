#include<iostream>
#include<vector>
using namespace std;

bool thewinning(int n,int l,int k,vector<int>& dp){
    if(n<0) return false;
    if(n==0) return false;
    if(n==1) return true;
    if(n==k) return true;
    if(n==l) return true;

    if(dp[n]!=-1) return dp[n];
    bool win = false;

    if(!(thewinning(n-1,l,k,dp) && thewinning(n-k,l,k,dp) && thewinning(n-l,l,k,dp))){
        win=true;
    }

    return dp[n] = win;
    
}

int main(){
    int k=2;
    int l=3;
    int n = 3;
    vector<int> dp(n+1,-1);

    cout<<thewinning(n,l,k,dp);
}