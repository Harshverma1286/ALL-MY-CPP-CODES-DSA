#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check(int num,vector<int>& arr2,int d){
    int low = 0;
    int high = arr2.size()-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(abs(num-arr2[mid])<=d){
            return false;
        }
        else if(arr2[mid]<num){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return true;
}

int distancebetweenvalues(vector<int>& arr1, vector<int>& arr2,int d){
    sort(arr2.begin(),arr2.end());
    int count = 0;
    for(int i=0;i<arr1.size();i++){
        int num = arr1[i];
        if(check(num,arr2,d)==true){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> arr1 = {4,5,8};
    vector<int> arr2 ={10,9,1,8};

    int d = 2;

    cout<<distancebetweenvalues(arr1,arr2,d);
}