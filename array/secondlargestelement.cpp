#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int smax = 0;
    int max = 0;
    for(int i=0;i<=5;i++){
        if(max<arr[i]){
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i]){
            smax = arr[i];
        }
    }
    cout<<smax;
}