#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,int> m;
    m[3] = 100;
    m[2] =89;
    m[4] = 98;
    for(auto val:m){
        cout<<val.first<<" ";
    }
}