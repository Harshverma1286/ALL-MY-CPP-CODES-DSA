#include<iostream>
using namespace std;

int main(){
    int arr1[]={1,4,5,8};
    int arr2[]={2,3,6,7,10,12};

    int n = sizeof(arr1)/sizeof(arr1[0]);

    int m = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[n+m];

    int i=0;
    int j=0;
    int k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else if(arr2[j]<arr1[i]){
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    if(i>n-1){
        while(j<m){
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    else{
        while(i<n){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
    }


    for(int i=0;i<(n+m);i++){
        cout<<arr3[i]<<" ";
    }
}