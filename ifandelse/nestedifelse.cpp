#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x%5==0){
        if(x%3==0){
            cout<<"disible by 5 and 3 both";
        }
        else{
            cout<<"divisible by 5 but not 3";
        }
    }
    else{
        if(x%3==0){
            cout<<"not divisible by 5 but divisibe by 3";
        }
        else{
            cout<<"not divisible by 5 and 3";
        }
    }
}