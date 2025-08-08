#include<iostream>
#include<vector>
using namespace std;

void subarray(vector<int>& arr,vector<int> ans,int idx){
    if(idx==arr.size()){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }

    if(ans.size()==0){
        subarray(arr,ans,idx+1);
        ans.push_back(arr[idx]);
        subarray(arr,ans,idx+1);
    }
    else{
        if(ans.back()==arr[idx-1]){
            subarray(arr,ans,idx+1);
            ans.push_back(arr[idx]);
            subarray(arr,ans,idx+1);
        }
        else{
           subarray(arr,ans,idx+1); 
        }
    }
}

int main(){
    vector<int> arr = {1,2,3,4};
    vector<int> ans;
    int idx = 0;
    subarray(arr,ans,idx);
}