#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {10,20,-4,6,18,24,105,118};

    priority_queue<int, vector<int>, greater<int>> pq;
    int k = 4;
    for(int i=0;i<v.size();i++){
        pq.push(v[i]);
    }
    queue<int> q;

    for(int i=1;i<k;i++){
        q.push(pq.top());
        pq.pop();
    }
    
    cout<<pq.top()<<endl;
    while(q.size()>0){
        pq.push(q.front());
        q.pop();
    }
}