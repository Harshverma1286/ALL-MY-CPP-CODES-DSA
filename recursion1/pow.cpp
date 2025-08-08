#include<iostream>
using namespace std;

int pow(int a , int b){
    int p=1;
    for(int i=1;i<=b;i++){
        p*=a;
    }
    return p;
}

int powrec(int a , int b){
    if(b==0) return 1;
    return a*powrec(a,b-1);
}

int main(){
    int a;
    cout<<" enter a:";
    cin>>a;
    int b;
    cout<<"enter b : ";
    cout<<b;
    cin>>b;
    cout<<powrec(a,b);
}