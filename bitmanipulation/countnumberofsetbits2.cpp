#include<iostream>
using namespace std;

int main(){
    int n = 5;

    int count =0;

    while(n>0){
        count++;
        n = (n & n-1);
    }

    cout<<count;
}