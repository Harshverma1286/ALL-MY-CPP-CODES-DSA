#include<iostream>
#include<vector>
using namespace std;

void forming(vector<int>& arr,vector<int> ans,int idx,bool picked){
    if(ans.size()>=2){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    if(idx>=arr.size()) return;

    for(int i=idx;i<arr.size();i++){
        if(ans.empty()){
            if(arr[i]%2==0){
                ans.push_back(arr[i]);
                forming(arr,ans,i+1,false);
                ans.pop_back();
            }
        }
        else{
            if(picked && arr[i]%2==0 && arr[i]>ans.back()){
                ans.push_back(arr[i]);
                forming(arr,ans,i+1,false);
                ans.pop_back();
            }
            else if(!picked && arr[i]%2!=0 && arr[i]>ans.back()){
                ans.push_back(arr[i]);
                forming(arr,ans,i+1,true);
                ans.pop_back();
            }
        }
    }
}

int main(){
    vector<int> arr = {1,2,3,4};
    int idx = 0;
    vector<int> ans;
    forming(arr,ans,idx,true);
}