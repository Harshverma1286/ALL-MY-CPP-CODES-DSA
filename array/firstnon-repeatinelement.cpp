#include<iostream>
using namespace std;

int main(){
    int arr[8]={2,2,1,1,3,4,4,5};
    int count=0;
    int n = 8;

    for(int i=0;i<=7;i++){
        int j = 0;
        for( j=0;j<=7;j++){
            if(i!=j && arr[i]==arr[j]){
                break;
            }
            if(j==n-1){
                cout<<arr[i];
                return 0;
            }
        }
    }
}