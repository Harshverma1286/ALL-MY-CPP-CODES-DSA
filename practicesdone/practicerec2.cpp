#include<iostream>
using namespace std;

void function(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    function(i+1,n);
}
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    function(1,n);
}