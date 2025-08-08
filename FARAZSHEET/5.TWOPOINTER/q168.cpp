#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
    bool areSentencesSimilar(string sentence1, string sentence2) {
        if(sentence1==sentence2) return true;
        vector<string> words1;
        vector<string> words2;

        string words;

        stringstream ss1(sentence1);

        stringstream ss2(sentence2);

        while(ss1>>words) words1.push_back(words);

        while(ss2>>words) words2.push_back(words);

        int n1 = words1.size();
        int n2 = words2.size();


        if(n1<n2){
            swap(words1,words2);
            swap(n1,n2);
        }

        int l =0;
        int r =0;

        while(l<n2 && words1[l]==words2[l]) l++;

        while(r<n2 && words1[n1-1-r]==words2[n2-1-r]) r++;

        return l+r>=n2;
        
    }

int main(){
    string sentence1 = "eTUny i b R UFKQJ EZx JBJ Q xXz";
    string sentence2 = "eTUny i R EZx JBJ xXz";

    bool ans = areSentencesSimilar(sentence1,sentence2);

    if(ans==true) cout<<"true";
    else cout<<"false";
}