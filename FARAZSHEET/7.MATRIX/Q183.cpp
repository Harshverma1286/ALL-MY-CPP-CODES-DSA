#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> construct2darray(vector<int>& original,int m,int n){
    if(original.size()!=m*n) return {};

    vector<vector<int>> ans(m,vector<int>(n));

    for(int i=0;i<original.size();i++){
        ans[i/n][i%n] = original[i];
    }
    return ans;
}

int main(){
    vector<int> original = {1,2,3,4};
    int m = 2;
    int n=2;

    vector<vector<int>> ans = construct2darray(original,m,n);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}