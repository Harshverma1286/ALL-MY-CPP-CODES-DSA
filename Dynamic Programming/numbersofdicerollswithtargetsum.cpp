#include<iostream>
using namespace std;

int theways(int n,int k,int target){
    if(n==0 && target==0) return 1;
    if(n==0) return 0;
    int ways = 0;
    for(int j=1;j<=6;j++){
        if(target-j<0) continue;
        ways = ways + theways(n-1,k,target-j);
    }
    return ways;
}

int main(){
    int n = 2;
    int k = 6;
    int target = 7;
    cout<<theways(n,k,target);
}