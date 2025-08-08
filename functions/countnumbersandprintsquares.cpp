#include<iostream>
using namespace std;

int count(int x){
    int count = 0;
    while(x>0){
        int temp = x%10;
        count++;
        x=x/10;
    }
    return count;
}

int square(int x){
    return x*x;
}

int main(){
    int n;
    cin>>n;
    int digits = count(n);
    cout<<square(digits);
}