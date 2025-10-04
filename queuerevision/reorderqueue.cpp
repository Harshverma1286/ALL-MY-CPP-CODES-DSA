#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    int n = q.size()/2;
    int value = n;

    while(value>0){
        q.push(q.front());
        q.pop();
        value--;
    }

    value = n;
    queue<int> temp;
    while(value>0){
        temp.push(q.front());
        q.pop();
        value--;
    }

    while(temp.size()>0){
        q.push(q.front());
        q.pop();
        q.push(temp.front());
        temp.pop();
    }

    int size = q.size();

    for(int i=0;i<size;i++){
        int value = q.front();
        cout<<value<<" ";
        q.push(value);
        q.pop();
    }
}