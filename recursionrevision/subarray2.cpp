#include<iostream>
#include<vector>
using namespace std;

void subarray(vector<int> ans, int arr[],int idx,int n){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subarray(ans,arr,idx+1,n);
    if(ans.size()==0|| arr[idx-1]==ans[ans.size()-1]){
        ans.push_back(arr[idx]);
        subarray(ans,arr,idx+1,n);
    }
}

int main(){
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> ans;
    int idx = 0;

    subarray(ans,arr,idx,n);
}