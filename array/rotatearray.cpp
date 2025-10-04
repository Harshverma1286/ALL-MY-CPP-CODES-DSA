#include<iostream>
#include<vector>
using namespace std;

void reversepart(int i , int j , vector<int>& v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}

int main(){
    vector<int> v;


    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);

    for(int i=0;i<+v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int n = v.size();
    int k = 9;

    if(k>n){
        k=k%n;
    }

    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);

    
    for(int i=0;i<=n-1;i++){
        cout<<v[i]<<" ";

    }



}

    //reversepart(1,3,v);

