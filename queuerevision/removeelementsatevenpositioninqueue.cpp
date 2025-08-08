#include<iostream>
#include<queue>
using namespace std;

void display(queue<int>& q){
    int size = q.size();

    for(int i=0;i<size;i++){
        int value = q.front();
        cout<<value<<" ";
        q.pop();
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int size = q.size();
    for(int i=0;i<size;i++){
        if(i%2==0) q.pop();
        else{
            int value = q.front();
            q.pop();
            q.push(value);
        }
    }

    display(q);
}