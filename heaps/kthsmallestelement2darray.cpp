#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
   int m;
    cout<<"enter the number of rows : ";
    cin>>m;
    int n;
    cout<<" enter the number of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    priority_queue<int , vector<int> , greater<int>> pq;
    int k = 8;
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            pq.push(arr[i][j]);
            while(pq.size()>k){
                ans.push_back(pq.top());
                pq.pop();
            }
        }
    }
    while(pq.size()>0){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}