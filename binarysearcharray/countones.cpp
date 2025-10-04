#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {0, 0, 0, 0, 0,1,1,1,1,1};

    int count = 0;

    int low = 0;
    int high = arr.size()-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==1){
            count = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(count==0) cout<<count;
    else{ 
        count = arr.size()-count;
        cout<<count;
    }
}