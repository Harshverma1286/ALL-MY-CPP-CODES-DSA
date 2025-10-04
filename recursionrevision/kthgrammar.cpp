#include<iostream>
using namespace std;

int kthgrammar(int n,int k){
    if(n==1) return 0;
    if(k%2==0){
        int prevans= kthgrammar(n-1,k/2);
        if(prevans==0) return 1;
        else return 0;
    }
    else{
        int prevans = kthgrammar(n-1,k/2+1);
        return prevans;
    }

}

int main(){
    int n = 4;
    int k = 6;

    cout<<kthgrammar(n,k);
}