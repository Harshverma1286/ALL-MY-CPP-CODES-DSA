#include<iostream>
#include<cmath>
using namespace std;

bool checkperfectnumber(int n){
    int sum = 0;
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            sum+=i;
        }
    }
    for(int i=sqrt(n);i>=2;i--){
        if(n%(n/i)==0){
            sum+=n/i;
        }
    }
    return sum==n;
}

int main(){
    int n = 28;

    bool ans = checkperfectnumber(n);

    if(ans==true) cout<<"TRUE";
    else cout<<"FALSE";
}