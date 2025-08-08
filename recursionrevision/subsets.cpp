#include<iostream>
#include<string>
#include<vector>
using namespace std;

void subsets(int nums[],int n,int i,vector<int> v){
    if(i==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subsets(nums,n,i+1,v);
    v.push_back(nums[i]);
    subsets(nums,n,i+1,v);
}

int main(){
    int n=3;
    int  nums[n]= {1,2,3};

    vector<int> v;

    subsets(nums,n,0,v);
}