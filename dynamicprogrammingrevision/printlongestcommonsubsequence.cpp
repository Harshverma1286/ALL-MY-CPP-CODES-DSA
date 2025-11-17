#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
#include<algorithm>
using namespace std;

int main(){
    string a = "acbcf";

    string b = "abcdaf";

    string ans = "";

    vector<vector<int>> dp(a.length()+1,vector<int>(b.length()+1,0));


    for(int i=1;i<a.length()+1;i++){
        for(int j=1;j<b.length()+1;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }

    int i = a.length();
    int j = b.length();

    while(i>0 && j>0){
        if(a[i-1]==b[j-1]){
            ans+=a[i-1];
            i=i-1;
            j=j-1;
        }
        else{
            if(dp[i][j-1]>dp[i-1][j]){
                j = j-1;
            }
            else if(dp[i-1][j]>dp[i][j-1]){
                i=i-1;
            }
        }
    }


    reverse(ans.begin(),ans.end());

    cout<<ans;
}