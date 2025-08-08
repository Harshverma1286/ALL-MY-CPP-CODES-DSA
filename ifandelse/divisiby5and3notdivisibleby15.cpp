#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x%15!=0){
        if(x%5==0 || x%3==0){
            cout<<"divisible by 5 or 3 but not by 15";
        }
        else{
            cout<<"neither divisible by 5 or 3 nor by 15";
        }
    }
    else{
        cout<<"not divisible by 15";
    }
}