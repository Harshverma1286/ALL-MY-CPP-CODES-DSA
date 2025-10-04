#include<iostream>
using namespace std;

int hcf(int x , int y){
    int val = 1;
    for(int i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){
            val = i;
        }
    }
    return val;
} 

int main(){
    int x = 43; 
    int y = 21;
    cout<<hcf(x,y);
}