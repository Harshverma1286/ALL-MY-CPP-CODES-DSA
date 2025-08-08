#include<iostream>
using namespace std;

int main(){
    int x = 23;
    int y = 22;

    cout<<__builtin_popcount(x^y);
}