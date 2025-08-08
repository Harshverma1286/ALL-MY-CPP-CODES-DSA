#include<iostream>
#include<queue>
using namespace std;

int main(){
    // priority_queue<int> pq;//max heap
    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // pq.push(40);
    // pq.push(100);
    // pq.push(90);
    // pq.pop();
    // pq.push(20);
    // pq.push(94);
    // pq.pop();
    // cout<<pq.top();

    priority_queue<int , vector<int> , greater<int>> pq;
    pq.push(20);
    pq.push(30);
    pq.push(10);
    pq.pop();
    pq.push(60);
    pq.push(70);
    pq.pop();
    cout<<pq.top();

}