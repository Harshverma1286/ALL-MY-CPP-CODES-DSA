#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    vector<int> ans;

    int p=0;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            ans.push_back(arr[i]);
            p=i;
            break;
        }
    }
    int i=1;
    int j=k;
    while(j<n){
        if(p>=i){
            ans.push_back(arr[p]);
        }
        else{
            for(int k=i;k<=j;k++){
                if(arr[k]<0){
                    ans.push_back(arr[k]);
                    p=k;
                    break;
                }
            }
        }
        i++;
        j++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}