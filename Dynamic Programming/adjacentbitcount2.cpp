#include<iostream>
#include<vector>
using namespace std;

int getcount(int n,int k,int lastchar,vector<vector<vector<int>>>& dp){
    if(n==0) return 0;
    if(n==1){
        if(k==0) return 1;
        else return 0;
    }

    if(dp[n][k][lastchar]!=-1) return dp[n][k][lastchar];

    if(lastchar==1){
        return dp[n][k][lastchar] = getcount(n-1,k,0,dp)+ ((k>0) ? getcount(n-1,k-1,1,dp) : 0) ;
    }
    else return dp[n][k][lastchar] = getcount(n-1,k,0,dp)+getcount(n-1,k,1,dp);
}

int main(){
    int n = 5;
    int k=2;

   vector<vector<vector<int>>> dp(105, vector<vector<int>>(105, vector<int>(2, -1)));
    cout<<getcount(n,k,0,dp)+getcount(n,k,1,dp);
}