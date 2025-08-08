#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {19,12,23,8,16};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> ans(n,0);

    for(int i=0;i<n;i++){
        ans[i]=arr[i];
    }

    sort(ans.begin(),ans.end());


    for(int i=0;i<n;i++){
        for(int j=0;j<ans.size();j++){
            if(arr[i]==ans[j]){
                arr[i]=j;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}