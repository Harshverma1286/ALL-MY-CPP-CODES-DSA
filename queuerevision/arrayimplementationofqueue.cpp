#include<iostream>
using namespace std;

class queue{
    public:
    int front;
    int back;
    int arr[5];
    int size;

    queue(){
        front = 0;
        back = 0;
        size=5;
    }

    void push(int val){
        if(back==size){
            cout<<"THE SIZE IS FULL!";
            return;
        }
        arr[back] = val;
        back++;
    }

    void pop(){
        if(front-back==0){
            cout<<"QUEUE IS EMPTY!";
            return;
        }
        front++;
    }

    int queuefront(){
        return arr[front];
    }

    int queueback(){
        return arr[back-1];
    }
    void display(){
        for(int i=front;i<=back-1;i++){
            cout<<arr[i]<<" ";
        }
    }
};


int main(){

    queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<q.queuefront()<<endl;
    cout<<q.queueback()<<endl;

    q.display();

}