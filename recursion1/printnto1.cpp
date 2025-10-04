#include<iostream>
using namespace std;

void fun(int x){
    if(x==0) return;
    cout<<x<<endl;
    fun(x-1);
    return;
}

int main(){
    fun(5);
}