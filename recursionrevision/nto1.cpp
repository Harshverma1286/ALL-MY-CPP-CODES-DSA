#include<iostream>
using namespace std;

void nto1(int n){
    if(n==0) return;

    cout<<n<<endl;
    nto1(n-1);
    return;

}

int main(){
    int n;
    cin>>n;

    nto1(n);
}