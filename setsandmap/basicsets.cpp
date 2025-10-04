#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    s.erase(10);
    s.insert(60);
    s.insert(50);
    int target = 60;
    if(s.find(target)!=s.end()){
        cout<<"exits"<<" ";
    }
    else{
        cout<<"does not exists";
    }
    for(int ele : s){
        cout<<ele<<" ";
    }
}