#include<iostream>
using namespace std;

int main(){
    int n = 9;
    int i = 2;

    n = n | 1<<i;

    cout<<n;
}