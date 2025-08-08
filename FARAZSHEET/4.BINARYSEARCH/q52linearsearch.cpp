#include<iostream>
#include<vector>
using namespace std;

char lettersgreaterthantarget(vector<char>& letters,char target){
    int n = letters.size();
    
    int actualtarget = (int)target;

    bool flag = false;

    for(int i=0;i<n;i++){
        char ch = letters[i];
        int ascii = (int)ch;
        if(ascii>actualtarget){
            cout<<ch;
            flag = true;
            break;
        }
    }
    if(flag==false){
        return letters[0];
    }
}

int main(){
    vector<char> letters = {'b','c','j'};

    char target = 'd';

    lettersgreaterthantarget(letters,target);


}