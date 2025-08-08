#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<string,int> m;
    //pair<string , int> p1;
    //p1.first = "raghav";
    //p1.second = 80;
    //m.insert(p1);
    // pair<string,int> p2;
    // p2.first = "harsh";
    // p2.second = 78;
    // m.insert(p2);
    // pair<string,int> p3;
    // p3.first = "lokesh";
    // p3.second = 76;
    // m.insert(p3);
    m["raghav"] = 80;

    m["harsh"] = 78;
    m["lokesh"] = 76;
    cout<<m.size()<<endl;


    for(auto p: m ){
        cout<<p.first<<" "<<p.second<<endl;
    }

    m.erase("lokesh");
     for(auto p: m ){
        cout<<p.first<<" "<<p.second<<endl;
    }

}