#include<iostream>
using namespace std;

int main(){
    int arr[5] = {20,10,50,40,30};
    int max = 0;
    int smax = 0;
    int thirdmax = 0;

    for(int i=0;i<=4;i++){
        if(max<arr[i]){
            thirdmax = smax;
            smax = max;
            max=arr[i];
        }
        else if(smax<=arr[i]){
            smax = arr[i];
        }
        else if(thirdmax<=arr[i]){
            thirdmax= arr[i];
        }
    }
    cout<<thirdmax<<" "<<smax<<" "<<max;
}