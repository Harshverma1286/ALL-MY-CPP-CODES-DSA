#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(1);
    v1.push_back(6);

    vector<int> v2(v1.size());

    for(int i=0;i<=v1.size()-1;i++){
        for(int j=0;j<=v2.size();j++){
            if(i+j==v1.size()){
                v2[j] = v1[i];
            }
        }
        
    }

    for(int i=1;i<=v2.size();i++){
        cout<<v2[i]<<" ";
    }
    
}