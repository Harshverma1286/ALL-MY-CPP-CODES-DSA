#include<iostream>
using namespace std;

int squarenumbers(int x){
    return x*x;
}

void printupton(int x){
    for(int i=1;i<=x;i++){
        cout<<squarenumbers(i)<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    printupton(n);
}