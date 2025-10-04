#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x = 1;
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    int idx;

    for(int i=0;i<=v.size();i++){
        if(x==v[i]){
            idx = i;
        }
    }
    cout<<idx;
    
}