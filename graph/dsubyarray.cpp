#include<iostream>
#include<vector>
using namespace std;

int find(int x,vector<int>& parent){
    return parent[x];
}

void unionofelements(int a,int b,vector<int>& parents){
    int parenta = find(a,parents);

    int parentb = find(b,parents);

    for(int i=0;i<parents.size();i++){
        if(parents[i]==parentb){
            parents[i] = parenta;
        }
    }
}

int main(){
    int size = 5;
    vector<int> parent(size);

    for(int i=0;i<parent.size();i++){
        parent[i] = i;
    }

    unionofelements(0,1,parent);

    unionofelements(2,3,parent);

    cout<<find(2,parent)<<endl;

    unionofelements(1,2,parent);

    cout<<find(2,parent);



}