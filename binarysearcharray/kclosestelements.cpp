#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findClosestElements(vector<int>& arr,int x,int k){
    int n = arr.size();
    vector<int> ans(k);
    if(x<arr[0]){
        for(int i=0;i<k;i++){
            ans[i]= arr[i];
        }
        return ans;
    }
    else if(x>arr[n-1]){
        int i=n-1;
        int j = k-1;
        while(j>=0){
            ans[j] = arr[i];
            j--;
            i--;
        }
        return ans;
    }
    bool flag = false;
    int low = 0;
    int high = n-1;
    int idx = 0;

    int mid = -1;

    while(low<=high){
        mid = low+(high-low)/2;
        if(arr[mid]==x){
            flag = true;
            ans[idx] = arr[mid];
            idx++;
            break;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    int lb = high;
    int ub = low;
    if(flag==true){
        lb = mid-1;
        ub = mid+1;
    }
    while(idx<k && lb>=0 && ub<=n-1){
        int d1 = abs(x-arr[lb]);
        int d2 = abs(x-arr[ub]);
        if(d1<=d2){
            ans[idx] = arr[lb];
            idx++;
            lb--;
        }
        else if(d2<d1){
            ans[idx] = arr[ub];
            idx++;
            ub++;
        }
    }
    if(lb<0){
        while(idx<k){
            ans[idx]=arr[ub];
            idx++;
            ub++;
        }
    }
    if(ub>n-1){
        while(idx<k){
            ans[idx]=arr[lb];
            lb--;
            idx++;
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4,5};

    int x = 10;
    int k = 4;

     vector<int> ans =findClosestElements(arr,x,k);


    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}