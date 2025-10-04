#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int hIndex(vector<int>& citations){
    int n = citations.size();

    sort(citations.begin(),citations.end(),greater<int>());

    for(int i=0;i<n;i++){
        if(citations[i]>=i+1){
            continue;
        }
        else{
            return i;
        }
    }
    return n;
}

int main(){
    vector<int> citations ={3,0,6,1,5};

    cout<<hIndex(citations);

}