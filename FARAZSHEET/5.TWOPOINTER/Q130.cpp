#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> mergearrays(vector<vector<int>>& nums1,vector<vector<int>>& nums2){
    int i=0;
    int j =0;
    vector<vector<int>> nums3;

    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i][0]==nums2[j][0]){
            int value = nums1[i][1]+nums2[j][1];
            nums3.push_back({nums1[i][0],value});
            i++;
            j++;
        }
        else if(nums1[i][0]<nums2[j][0]){
            nums3.push_back({nums1[i][0],nums1[i][1]});
            i++;
        }
        else if(nums1[i][0]>nums2[j][0]){
            nums3.push_back({nums2[j][0],nums2[j][1]});
            j++;
        }
    }
    if(j>nums2.size()-1){
        while(i<nums1.size()){
            nums3.push_back({nums1[i][0],nums1[i][1]});
            i++;
        }
    }
    else{
        while(j<nums2.size()){
            nums3.push_back({nums2[j][0],nums2[j][1]});
            j++;
        }
    }
    return nums3;
}

int main(){
    vector<vector<int>> nums1 = {{1,2},{2,3},{4,5}};

    vector<vector<int>> nums2 = {{1,4},{3,2},{4,1}};

    vector<vector<int>> ans = mergearrays(nums1,nums2);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<" ";
    }


}