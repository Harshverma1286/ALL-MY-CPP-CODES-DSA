#include<iostream>
#include<vector>
using namespace std;

class maxheap{
    public:
    int arr[100];
    int i;

    maxheap(){
        i=1;
    }

    void push(int val){
        arr[i] = val;
        int j = i;
        while(j>1){
            if(arr[j/2]<arr[j]){
                swap(arr[j],arr[j/2]);
                j=j/2;
            }
            else break;
        }
        i++;
    }

    void pop(){
        if(i==1){
            cout<<"size is already zero";
        }
        i--;
        arr[1] = arr[i];
        int j=1;
        while(true){
            int l = 2*j;
            int r = 2*j+1;
            if(l>i-1) break;
            if(r>i-1){
                if(arr[j]<arr[l]){
                    swap(arr[j],arr[l]);
                    j=l;
                }
                else break;
            }
            else {
                if(arr[l] > arr[r]){
                    if(arr[j] < arr[l]){
                        swap(arr[j], arr[l]);
                        j = l;
                    }
                    else break;
                }
                else {
                    if(arr[j] < arr[r]){
                        swap(arr[j], arr[r]);
                        j = r;
                    }
                    else break;
                }
            }
        }
    }
    int top(){
        return arr[1];
    }

    int size(){
        return i-1;
    }

    void display(){
        for(int k=1;k<=i-1;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }


};

int main(){

    maxheap pq;

    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    pq.push(2);
    cout<<pq.top()<<endl;
    pq.pop();
     cout<<pq.top()<<endl;

}