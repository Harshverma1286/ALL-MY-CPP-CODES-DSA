#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void buildtree(vector<int>& arr,vector<int>& segmentrees,int idx,int low,int high){
    if(low==high){
        segmentrees[idx] = arr[low];
        return;
    }
    int mid = (low+high)/2;
    buildtree(arr,segmentrees,2*idx+1,low,mid);
    buildtree(arr,segmentrees,2*idx+2,mid+1,high);
    segmentrees[idx] = max(segmentrees[2*idx+1],segmentrees[2*idx+2]);
}

int getmax(vector<int>& segmenttree,int idx,int low,int high,int l,int r){
    if(l>high || r<low) return INT_MIN;
    if(low>=l && high<=r) return segmenttree[idx];
    int mid = (low+high)/2;
    int leftmax = getmax(segmenttree,2*idx+1,low,mid,l,r);
    int rightmax = getmax(segmenttree,2*idx+2,mid+1,high,l,r);
    return max(leftmax,rightmax);
}

int main(){
    vector<int> arr = {1,4,2,8,6,4,9,3};

    int n = 4*arr.size();

    vector<int> segmenttree(n);

    int idx = 0;

    int low = 0;
    int high = arr.size()-1;

    buildtree(arr,segmenttree,idx,low,high);

    int l;
    int r;
    cin>>l>>r;
    cout<<getmax(segmenttree,idx,low,high,l,r);
}