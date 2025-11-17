#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;

int main(){
    string a = "geek";
    string b = "eke";

    vector<vector<int>> dp(a.length()+1,vector<int>(b.length()+1,0));

    for(int i=1;i<a.length()+1;i++){
        for(int j=1;j<b.length()+1;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }


    cout<<(a.length()+b.length())-dp[a.length()][b.length()];
}