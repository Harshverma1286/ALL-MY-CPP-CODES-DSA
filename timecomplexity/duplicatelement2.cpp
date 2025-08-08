#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v ={6,1,2,4,3,2,7,4};

    bool flag = false;

    sort(v.begin(),v.end());

    for(int i=1;i<v.size();i++){
        if(v[i-1]==v[i]){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"it contains duplicate";
    }
    else{
        cout<<"it does not contain duplicate";
    }
}