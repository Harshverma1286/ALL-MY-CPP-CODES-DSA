#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" "<<" ";
        }
        for(int k=i-1;k>=0;k--){
            cout<<(char)('A'+k)<<" ";
        }
        for(int m=1;m<i;m++){
            cout<<(char)('A'+m)<<" ";
        }
        cout<<endl;
    }
}