#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){
    string str = "raghav is a maths teacher. he is a dsa mentor as well";

    stringstream ss(str);
    string temp;

    vector<string> v;

    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());

    int maxcount = 1;
    int count = 1;

    for(int i=1;i<v.size();i++){
        count = 1;
        if(v[i]==v[i-1]){
            count++;
        }
        maxcount = max(maxcount,count);
    }
    count = 1;

    for(int i=1;i<v.size();i++){
        count = 1;
        if(v[i]==v[i-1]){
            count++;
        }
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<" ";
        }
    }




}