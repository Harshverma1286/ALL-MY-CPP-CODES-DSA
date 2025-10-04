#include<iostream>
using namespace std;

int factorial(int x){
    int f = 1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}

int combination(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int permutation(int n , int r){
    return factorial(n)/factorial(n-r);
}

int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    cout<<combination(n,r)<<endl;
    cout<<permutation(n,r);
}