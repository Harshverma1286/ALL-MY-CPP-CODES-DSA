#include<iostream>
using namespace std;

int maxpoweroftwo(int n){
    n = n|(n>>1);
    n = n|(n>>2);
    n = n|(n>>4);
    n = n|(n>>8);
    n = n|(n>>16);

    return (n+1)>>1;
}

int main(){
    int n=24;

    cout<<maxpoweroftwo(n);
}