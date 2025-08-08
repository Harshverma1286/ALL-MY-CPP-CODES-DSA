#include<iostream>
using namespace std;

int helper(int n){
    if(n<=0) return  0;
    if(n==1) return 1;
    if(n==2) return 3;
    return helper(n-1) + helper(n-2) + helper(n-3) + helper(n-4) + helper(n-5) + helper(n-6);
}

int main(){
    int n = 5;
    cout<<helper(n);
    return 0;
}