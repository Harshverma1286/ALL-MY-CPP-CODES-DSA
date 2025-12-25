#include<iostream>
#include<vector>
using namespace std;

void buildtree(vector<int>& arr,vector<int>& segmenttree,int low,int high,int idx){
    if(low==high){
        segmenttree[idx] = arr[low];
        return;
    }
    int mid = low+(high-low)/2;
    buildtree(arr,segmenttree,low,mid,2*idx+1);
    buildtree(arr,segmenttree,mid+1,high,2*idx+2);
    segmenttree[idx] = segmenttree[2*idx+1]+segmenttree[2*idx+2];
}

int sum(vector<int>& segmenttree,int low,int high,int idx,int l,int r,vector<int>& lazy){
    if(lazy[idx]!=0){
        int range = high-low+1;
        segmenttree[idx]+=range*lazy[idx];
        if(low!=high){
            lazy[2*idx+1]+=lazy[idx];
            lazy[2*idx+2]+=lazy[idx];
        }
        lazy[idx] = 0;
    }
    if(l>high ||r<low) return 0;
    if(low>=l && high<=r){
        return segmenttree[idx];
    }
    int mid = low+(high-low)/2;
    int leftsum = sum(segmenttree,low,mid,2*idx+1,l,r,lazy);
    int rightsum = sum(segmenttree,mid+1,high,2*idx+2,l,r,lazy);
    return leftsum+rightsum;
}

void updaterange(vector<int>& segmenttree,vector<int>& lazy,int low,int high,int idx,int l,int r,int val){
    if(lazy[idx]!=0){
        int range = high-low+1;
        segmenttree[idx]+=range*lazy[idx];
        if(low!=high){
            lazy[2*idx+1]+=lazy[idx];
            lazy[2*idx+2]+=lazy[idx];
        }
        lazy[idx] = 0;
    }
    if(l>high ||r<low) return;
    if(low>=l && high<=r){
        int range = high-low+1;
        segmenttree[idx]+=range*val;
        if(low!=high){
            lazy[2*idx+1]+=val;
            lazy[2*idx+2]+=val;
        }
        return;
    }
    int mid = low+(high-low)/2;
    updaterange(segmenttree,lazy,low,mid,2*idx+1,l,r,val);
    updaterange(segmenttree,lazy,mid+1,high,2*idx+2,l,r,val);
    segmenttree[idx] = segmenttree[2*idx+1]+segmenttree[2*idx+2];
}

int main(){
    vector<int> arr = {1,4,2,8,6,4,9,3};

    vector<int> segmenttree(4*arr.size());

    vector<int> lazy(4*arr.size());
    int low = 0;
    int high = arr.size()-1;
    int idx = 0;

    buildtree(arr,segmenttree,low,high,idx);
    cout<<sum(segmenttree,low,high,idx,2,4,lazy)<<endl;
    updaterange(segmenttree,lazy,low,high,idx,1,5,5);
    cout<<sum(segmenttree,low,high,idx,2,4,lazy)<<endl;
}