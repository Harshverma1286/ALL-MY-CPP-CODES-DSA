#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    arr1.push_back(20);
    arr1.push_back(24);

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(30);
    arr2.push_back(40);
    arr2.push_back(50);

    int m = arr1.size();
    int n = arr2.size();

    vector<int> arr3(m+n);

    int i = 0;
    int j = 0;
    int k = 0;

    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i>=m && j<=n){
         arr3[k] = arr2[j];
            k++;
            j++;
    }
    while(j>=n && i<=m){
        arr3[k] = arr1[i];
            k++;
            i++;
    }
    for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
}