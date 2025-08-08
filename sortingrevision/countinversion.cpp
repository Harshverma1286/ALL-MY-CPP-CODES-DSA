#include<iostream>
#include<vector>
using namespace std;

void mergetwosortedarray(vector<int>& arr1,vector<int>& arr2,vector<int>& v){
    int i=0;
    int j=0;
    int k =0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<=arr2[j]){
            v[k]=arr1[i];
            k++;
            i++;
        }
        else{
            v[k]=arr2[j];
            k++;
            j++;
        }
    }
    if(i>arr1.size()-1){
        while(j<arr2.size()){
            v[k]=arr2[j];
            k++;
            j++;
        }
    }
    else{
        while(i<arr1.size()){
            v[k]=arr1[i];
            k++;
            i++;
        }
    }
}

int countinversion(vector<int>& arr1,vector<int>& arr2){
    int count = 0;
    int i=0;
    int j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]>arr2[j]){
            count+=arr1.size()-i;
            j++;
        }
        else i++;
    }
    return count;
}


int mergesort(vector<int>& v){
    int count = 0;
    int n = v.size();

    int n1 = n/2;
    int n2 = n-n/2;

    vector<int> arr1(n1);
    vector<int> arr2(n2);


    if(n==1) {
        return 0;
    }



    for(int i=0;i<n1;i++){
        arr1[i]=v[i]; 
    }
    for(int i=0;i<n2;i++){
        arr2[i] = v[i+n1];
    }


    count += mergesort(arr1);
    count += mergesort(arr2);


    count+=countinversion(arr1,arr2);


    mergetwosortedarray(arr1,arr2,v);

    return count;
}

int main(){
    vector<int> v = {5,1,3,0,4,2,6};
    cout<<mergesort(v);
    cout<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    
}