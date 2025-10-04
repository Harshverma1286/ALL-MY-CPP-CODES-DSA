#include<iostream>
using namespace std;

void fun(int x){
    if(x==0) return;
    cout<<"good morning"<<endl;
    fun(x-1);
    return;
}

int main(){
    int x ;
    cout<<" enter x :";
    cin>>x;
    fun(x);
}