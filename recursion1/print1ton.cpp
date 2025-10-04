#include<iostream>
using namespace std;

void fun(int x){
    if(x==0) return;
     fun(x-1);
    cout<<x<<endl;
    return;
}

int main(){
    fun(5);
}