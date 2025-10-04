#include<iostream>
#include<vector>
using namespace std;

void removeone(int arr[],int i,vector<int> ans){
    int n = 8;
    if(i>=n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        return;
    }
    if(arr[i]!=1){
        ans.push_back(arr[i]);
    }

    removeone(arr,i+1,ans);
}

int main(){
    int n = 8;
    int arr[8] = {1,2,3,1,1,4,1,7};
    int i=0;
    vector<int> ans;

    removeone(arr,i,ans);
}