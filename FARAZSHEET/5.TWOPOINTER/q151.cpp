#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseprefix(string word,char ch){
    int idx =0;
    for(int i=0;i<word.length();i++){
        if(word[i]==ch){
            idx =i;
            break;
        }
    }

    int i=0;
    int j= idx;

    reverse(word.begin(),word.begin()+j+1);

    return word;
}

int main(){
    string word = "abcdefd";

    char ch = 'd';

    cout<<reverseprefix(word,ch);
}