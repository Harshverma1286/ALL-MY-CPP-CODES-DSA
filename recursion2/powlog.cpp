#include<iostream>
using namespace std;

int pow(int n,int x){
    if(n==1) return x;
    int ans = pow(n,x/2);
    if(n%2==0){
         return ans*ans;
    }
    else{
        return ans*ans*x;
    }
}

int main(){
    cout<<pow(3,4);
}