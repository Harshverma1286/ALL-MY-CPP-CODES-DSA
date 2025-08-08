#include<iostream>
using namespace std;

int arrangingcoins(int n){
    int low = 0;
    int high = n;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(mid*(mid+1)/2 <= n){
            if(((mid+1)*((mid+1)+1)/2)>n){
                return mid;
            }
            else{
                low = mid+1;
            }
        }
        else if(mid*(mid+1)/2>n){
            if(((mid-1)*((mid-1)+1)/2)<n){
                return mid-1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int n = 5;
    cout<<arrangingcoins(n);
    return 0;
}