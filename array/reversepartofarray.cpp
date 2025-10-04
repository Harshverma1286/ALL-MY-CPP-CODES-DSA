#include<iostream>
#include<vector>
using namespace std;

void reversepart(int i , int j , vector<int>& v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}

int main(){
    vector<int> v;


    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);

    for(int i=0;i<+v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    reversepart(1,3,v);

    for(int i=0;i<+v.size();i++){
        cout<<v[i]<<" ";
    }
}