#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);


    int k=2;
    int n = q.size();

    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }

    for(int i=0;i<k;i++){
        q.pop();
    }

    int size = q.size();

    for(int i=0;i<size;i++){
        int val = q.front();
        cout<<val<<" ";
        q.push(val);
        q.pop();
    }
}