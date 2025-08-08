#include<iostream>
using namespace std;

class maxheap{
    public:
    int arr[50];
    int idx;

    maxheap(){
        idx = 1;
    }

    int top(){
        return arr[1];
    }

    void push(int x){
        arr[idx] = x;
        int i = idx;
        idx++;
        while(i!=1){
            if(arr[i]>arr[i/2]){
                swap(arr[i],arr[i/2]);
            }
            else break;
            i=i/2;
        }
    }

    void pop(){
        idx--;
        arr[1] = idx;
        int i=1;
        while(true){
            int l = 2*i;
            int r = 2*i+1;
            if(l>idx-1) break;
            if(r>idx-1){
                if(arr[i]<arr[l]){
                    swap(arr[i],arr[l]);
                    i=l;
                }
                break;
            }
            if(arr[l]>arr[r]){
                if(arr[i]<arr[l]){
                    swap(arr[i],arr[l]);
                    i=l;
                }
                else  break;
            }
            else{
                if(arr[i]<arr[r]){
                    swap(arr[i],arr[r]);
                    i =r;
                }
                else break;

            }
        }
    }
    int size(){
        return idx-1;
    }

     void display(){
        for(int i=1;i<=idx-1;i++){
            cout<<arr[i]<<" ";
        }
    }

};


int main(){
    maxheap pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    cout<<pq.top()<<endl;
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.pop();
    cout<<pq.size()<<endl;
    cout<<pq.top();
    pq.display();



}