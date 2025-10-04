#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isvowel(char ch){
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

vector<int> vowelstrings(vector<string>& words,vector<vector<int>>& queries){
    int n = words.size();

    vector<int> ans(n);

    int count = 0;


    for(int i=0;i<n;i++){
        int j=0;
        int k = words[i].length()-1;
        if(isvowel(words[i][j]) && isvowel(words[i][k])){
            count++;
        }
        ans[i] = count;
    }

    vector<int> finalans;

    for(int i=0;i<queries.size();i++){
        int firstvalue = queries[i][0];
        int lastvalue = queries[i][1];
        int  value = ans[lastvalue] - ((firstvalue>0) ? ans[firstvalue-1] : 0);
        finalans.push_back(value);
    }
    return finalans;
}

int main(){
    vector<string> words = {"aba","bcb","ece","aa","e"};

    vector<vector<int>> queries = {{0,2},{1,4},{1,1}};


    vector<int> ans = vowelstrings(words,queries);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}