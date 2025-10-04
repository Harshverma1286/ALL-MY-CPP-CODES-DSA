#include<iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(i==0 && j==0){
                cout<<1<<" ";
                break;
            }
            int a= i;
            int b = j;
            int acb = fact(a)/(fact(b)*fact(a-b));
            cout<<acb<<" ";
        }
        cout<<endl;
    }
}