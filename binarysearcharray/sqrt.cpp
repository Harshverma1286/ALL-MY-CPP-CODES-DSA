#include<iostream>
using namespace std;

int main(){
    int x = 20;
    
    int low = 0;
    int high = x-1;

    bool flag = false;

    while(low<=high){
        int mid = low+(high-low)/2;

        if(mid*mid==x){
            flag = true;
            cout<<mid;
            break;
        }
        else if(mid*mid<x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    if(flag==false){
        cout<<high;
    }

}

