#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "mississippi";
    int arr[256];
    int lastarr[256];

    for(int i=0;i<256;i++){
        arr[i]=-1;
        lastarr[i]=-1;
    }

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        int ascii = (int)ch;
        if(arr[ascii]==-1){
            arr[ascii]=i;
        }
        lastarr[str[i]]=i;
    }
    for (int i = 0; i < 256; i++) {
        if (arr[i] != -1) { // If the character exists in the string
            cout << (char)i << ": First index = " << arr[i]
                 << ", Last index = " << lastarr[i] << endl;
        }
    }

    

}
