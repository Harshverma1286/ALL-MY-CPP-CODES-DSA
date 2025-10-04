#include<iostream>
using namespace std;

int pick = 6;

int guess(int n){
    if(n==pick) return 0;
    else if(n>pick) return -1;
    else return 1;
}

int guessnumber(int n){
    int low = 0;
    int high = n;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(guess(mid)==0){
            return mid;
        }
        else if(guess(mid)==1){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    int n = 10;

    cout<<guessnumber(n);
}