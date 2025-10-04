#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>

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
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i+1]){
            cout<<v[i]<<" ";
        }
    }

    

        // for(int i=0;i<v.size();i++){
        //     if(v[i]==temp) cout<<temp<<endl;
        //     else v.push_back(temp);
        // }
    }


