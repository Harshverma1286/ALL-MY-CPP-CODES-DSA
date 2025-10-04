#include<iostream>
#include<vector>

using namespace std;

int missingnumber(vector<int>& nums){
    int n = nums.size();
    int i=0;
    int correctidx = 0;
    while(i<n){
        correctidx = nums[i];
        if(nums[i]==n) i++;
        else if(i!=correctidx){
            swap(nums[i],nums[correctidx]);
        }
        else i++;
    }
    for(int i=0;i<n;i++){
        if(i!=nums[i]) return i;
    }
    return n;
}

int main(){
    vector<int> nums ={3,0,1};

    cout<<missingnumber(nums);
}