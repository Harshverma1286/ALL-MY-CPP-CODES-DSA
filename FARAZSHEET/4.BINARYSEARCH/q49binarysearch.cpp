#include<iostream>
#include<vector>
using namespace std;

int hIndex(vector<int>& citations){
    int n = citations.size();

    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;

        if(citations[mid]<n-mid){
            low = mid+1;
        }
        else if(citations[mid]>=n-mid){
            high = mid-1;
        }
    }
    int hindex = n-low;
    return hindex;
}

int main(){
    vector<int> citations = {0,1,3,5,6};

    cout<<hIndex(citations);
}


