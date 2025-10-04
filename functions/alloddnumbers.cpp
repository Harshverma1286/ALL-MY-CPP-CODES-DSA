#include<iostream>
using namespace std;

void numbers(int a, int b){
    int minimum = min(a,b);
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int x , y;
    cin>>x>>y;
    numbers(x,y);
}