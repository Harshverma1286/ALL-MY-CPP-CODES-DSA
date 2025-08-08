#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<string> v ={"flower","flight","flow"};

     sort(v.begin(),v.end());

     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }

     string first = v[0];
     string last = v[v.size()-1];
     string ans = " ";

     for(int i=0;i<first.length();i++){
        if(first[i]==last[i]){
            ans+=first[i];
        }
     }

     cout<<endl;

     cout<<ans;
}

