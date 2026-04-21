#include<iostream>
#include<vector>
using namespace std;

 void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0;
    int j=0;
    int k=0;

    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res[k]=a[i];
            k++;
            i++;
        }
        else{
            res[k]=b[j];
            k++;
            j++;
        }
        if(i==a.size()){
            while(j<b.size()){
                res[k]=b[j];
                k++;
                j++;
            }
        }
        if(j==b.size()){
            while(i<a.size()){
                res[k]=a[i];
                k++;
                i++;
            }
        }
    }
 }

void mergesort(vector<int>& arr){
    if(arr.size()==1) return;

    int size1 = arr.size()/2;
    int size2 = arr.size()-arr.size()/2;

    vector<int> arr1(size1);
    vector<int> arr2(size2);

    for(int i=0;i<arr1.size();i++){
        arr1[i] = arr[i];
    }

    for(int i=0;i<arr2.size();i++){
        arr2[i] = arr[i+size1];
    }

    mergesort(arr1);
    mergesort(arr2);
    merge(arr1,arr2,arr);
}

int main(){
    vector<int> arr = {5,1,3,0,4,9,6};

    mergesort(arr);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}