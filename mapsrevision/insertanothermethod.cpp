#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;

    m["harsh"] = 20;
    m["verma"] = 30;
    m["raghav"] = 40;

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<" ";
    }
}