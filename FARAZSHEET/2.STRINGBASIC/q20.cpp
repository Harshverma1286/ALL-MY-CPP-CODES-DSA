#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "programming";

    int vowels = 0;
    int consonants = 0;

    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowels++;
        }
        else{
            consonants++;
        }
    }

    int difference = abs(vowels-consonants);

    cout<<difference;
}