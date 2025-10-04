#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = n-1;
    bool flag = true;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag==false){
        cout<<"it is not a palindrome number";
    }
    else{
        cout<<"it is a palindrome number";
    }
}