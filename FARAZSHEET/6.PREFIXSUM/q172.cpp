#include<iostream>
#include<vector>
using namespace std;

vector<int> gooddaystorobbank(vector<int>& security,int time){
    int n = security.size();

    vector<int> non_increasing(n,0);
    vector<int> non_decreasing(n,0);

    for(int i=1;i<n;i++){
        if(security[i]<=security[i-1]){
            non_increasing[i] = non_increasing[i-1]+1;
        }
    }

    for(int i=n-2;i>=0;i--){
        if(security[i]<=security[i+1]){
            non_decreasing[i] = non_decreasing[i+1]+1;
        }
    }

    vector<int> ans;
    for(int i=time;i<n-time;i++){
        if(non_increasing[i]>=time && non_decreasing[i]>=time){
            ans.push_back(i);
        }
    }

    return ans;
}

int main(){
    vector<int> security = {5,3,3,3,5,6,2};

    int time = 2;

    vector<int> ans = gooddaystorobbank(security,time);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}