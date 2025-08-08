#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;

    pair<string,int> p1;
    p1.first = "harsh";
    p1.second = 98;

    pair<string,int> p2;
    p2.first = "verma";
    p2.second = 79;

    pair<string,int> p3;
    p3.first = "raghav";
    p3.second = 80;

    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<" ";
        cout<<endl;
    }
}