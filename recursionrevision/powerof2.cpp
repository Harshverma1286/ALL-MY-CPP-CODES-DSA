#include<iostream>
using namespace std;

bool power(int n){
    if(n==0) return true;
    if(n%2!=0) return false;
    if(n<0) return false;
    if(n==2) return true;
    return power(n/2); 
}

int main(){
    int n;
    cin>>n;
    cout<<power(n);

}