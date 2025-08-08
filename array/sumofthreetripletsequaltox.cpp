#include<iostream>
using namespace std;

int main(){
    int x = 9;
    int arr[6]={4,3,2,1,5,6};
    int count = 0;

    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    count++;
                }
            }
        }
    }
    cout<<count;

}