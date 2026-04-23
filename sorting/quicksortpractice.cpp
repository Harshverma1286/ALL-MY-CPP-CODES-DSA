#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr,int si,int ei){
    int pivotele = arr[si];
    int count = 0;
    for(int i=si+1;i<=ei;i++){
        if(arr[si]>=arr[i]) count++;
    }

    int pivotidx = count+si;
    swap(arr[pivotidx],arr[si]);

    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotele) i++;
        else if(arr[j]>=pivotele)j--;
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    return pivotidx;
}

void quicksort(vector<int>& arr,int si,int ei){
    if(si>=ei) return;
    int pivotidx = partition(arr,si,ei);

    quicksort(arr,si,pivotidx-1);
    quicksort(arr,pivotidx+1,ei);

}

int main(){
    vector<int> arr = {5,1,8,2,7,6,3,4};

    quicksort(arr,0,arr.size()-1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}