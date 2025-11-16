#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;

int main(){
    string x = "abcdgh";
    string y = "abedfgh";

    vector<vector<int>> dp(x.length()+1,vector<int>(y.length()+1,0));

    for(int i=1;i<x.length()+1;i++){
        for(int j=1;j<y.length()+1;j++){
            if(x[i-1]==y[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    cout<<dp[x.length()][y.length()];
}