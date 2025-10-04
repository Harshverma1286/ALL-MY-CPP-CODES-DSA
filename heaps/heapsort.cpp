#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[] = {10,1,2,20,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int , vector<int> , greater<int>> pq;
    vector<int> ans;

    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        // if(pq.size()==0){
        //     //ans.push_back(pq.top());
        //     pq.pop();
        // }
    }
    while(pq.size()>0){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}