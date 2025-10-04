#include<iostream>
#include<vector>
using namespace std;

void pickfromeitheraandb(vector<int>& a,int i,vector<int>& b,int j,vector<int> ans,bool ispicked){
    if(ans.size()>=2 && !ispicked){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    if(j>=b.size()) return;

    if(ispicked){
        for(int idx = i;idx<a.size();idx++){
            if(ans.empty()|| a[idx]>ans.back()){
                ans.push_back(a[idx]);
                pickfromeitheraandb(a,idx+1,b,j,ans,false);
                ans.pop_back();
            }
        }
    }
    else{
        for(int idx=j;idx<b.size();idx++){
            if(b[idx]>ans.back()){
                ans.push_back(b[idx]);
                pickfromeitheraandb(a,i,b,idx+1,ans,false);
                ans.pop_back();
            }
        }
    }
}

int main(){
    vector<int> a = {10,15,25};
    vector<int> b = {1,5,20,30};
    int i=0;
    int j=0;
    vector<int> ans;
    pickfromeitheraandb(a,i,b,j,ans,true);
}