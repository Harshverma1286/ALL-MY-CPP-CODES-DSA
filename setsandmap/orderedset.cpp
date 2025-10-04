#include<iostream>
#include<set>
#include<map>

using namespace std;

int main(){
    set<int> s;
    s.insert(7);
    s.insert(4);
    s.insert(2);
    for(auto ele : s){
        cout<<ele<<" ";
    }
}