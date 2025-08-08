#include<iostream>
#include<vector>
using namespace std;

int longestcommonsubsequenceswithkchanges(vector<int> first,vector<int> second,int i,int j,int k,vector<vector<vector<int>>>& dp){
    if(i>=first.size() || j>=second.size()) return 0;

    if(dp[i][j][k]!=-1) return dp[i][j][k];

    if(first[i]==second[j]){
        return dp[i][j][k] =  1+ longestcommonsubsequenceswithkchanges(first,second,i+1,j+1,k,dp);
    }
    else{
        if(k>0){
            int value = 1+ longestcommonsubsequenceswithkchanges(first,second,i+1,j+1,k-1,dp);
            int another = max(longestcommonsubsequenceswithkchanges(first,second,i+1,j,k,dp),longestcommonsubsequenceswithkchanges(first,second,i,j+1,k,dp));
            return dp[i][j][k] =  max(value,another);
        }
        else return dp[i][j][k] =  max(longestcommonsubsequenceswithkchanges(first,second,i+1,j,k,dp),longestcommonsubsequenceswithkchanges(first,second,i,j+1,k,dp));
    }
}

int main(){
    vector<int> first = {1,2,3,4,5};

    vector<int> second = {5,3,1,4,2};

    int k = 1;
    int i=0;
    int j=0;

    vector<vector<vector<int>>> dp(2005,vector<vector<int>>(2005,vector<int>(8,-1)));

    cout<<longestcommonsubsequenceswithkchanges(first,second,i,j,k,dp);
}