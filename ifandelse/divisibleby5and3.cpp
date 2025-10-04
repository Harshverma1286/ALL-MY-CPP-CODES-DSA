#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x%5==0 && x%3==0){
        cout<<"divisible by 5 and 3";
    }
    else{
        cout<<"not divisible by 5 and 3";
    }
}