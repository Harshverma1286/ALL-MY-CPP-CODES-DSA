#include<iostream>
using namespace std;

int sum1ton(int sum , int n){
    if(n==0){
        cout<<sum<<endl;
        return 0;
    }
 sum1ton(sum+n,n-1);
}

int sum2(int n){
    if(n==0) return 0;
    return n+sum2(n-1);
}

int main(){
    //cout<<sum1ton(0,6);
    cout<<sum2(5);
}