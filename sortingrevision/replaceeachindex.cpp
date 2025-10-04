#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>& ans){
    for(int i=1;i<ans.size();i++){
        if(ans[i-1]>ans[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int nums[] = {5,3,10};

    int n = sizeof(nums)/sizeof(nums[0]);

    int max = 0;

    for(int i=0;i<n;i++){
        if(max<nums[i]){
            max = nums[i];
        }
    }

    vector<int> ans;
    vector<int> count;

    for(int i=0;i<max;i++){
        for(int j=0;j<n;j++){
            ans.push_back(abs(nums[j]-i));
        }
        if(check(ans)==true){
            count.push_back(i);
            ans.resize(0);
        }
        else{
            ans.resize(0);
        }
    }

    for(int i=0;i<count.size();i++){
        cout<<count[i]<<" ";
    }


}