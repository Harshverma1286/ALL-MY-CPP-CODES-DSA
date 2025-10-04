#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {10,20,-4,6,18,24,105,118};
    int k = 3;

    priority_queue<int> pq;

    for(int i=0;i<k;i++){
        pq.push(v[i]);
    }
    for(int i=k;i<v.size();i++){
        if(pq.top()<v[i]) continue;
        else{
            pq.pop();
            pq.push(v[i]);
        }
    }
    cout<<pq.top();
}