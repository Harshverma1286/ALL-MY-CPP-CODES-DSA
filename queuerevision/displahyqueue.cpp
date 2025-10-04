#include<iostream>
#include<queue>
using namespace std;

void display(queue<int>& q){
    int size = q.size();
    for(int i=0;i<size;i++){
        int value = q.front();
        cout<<value<<" ";
        q.pop();
        q.push(value);
    }
}

void displaythequeue(queue<int>& q){
    q.push(-1);
    while(q.front()!=-1){
        int value = q.front();
        cout<<value<<" ";
        q.pop();
        q.push(value);
    }
    q.pop();
}

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    //display(q);
    displaythequeue(q);
}