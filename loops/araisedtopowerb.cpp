#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int power = 1;

    for(int i=1;i<=b;i++){
        power*=a;
        
    }
    cout<<power;
}