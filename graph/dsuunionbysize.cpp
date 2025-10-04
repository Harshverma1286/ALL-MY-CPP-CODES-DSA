#include<iostream>
#include<vector>
using namespace std;

int get(int x,vector<int>& parent){
    if(parent[x]==x) return parent[x];
    return get(parent[x],parent);
}

void unionofelements(int a,int b,vector<int>& parents,vector<int>& size){
    int parenta = get(a,parents);
    int parentb = get(b,parents);

    if(size[parenta]>size[parentb]){
        size[parenta]+=size[parentb];
        parents[parentb] = parenta;
    }
    else{
        size[parentb]+=size[parenta];
        parents[parenta] = parentb;
    }
}

int main(){
    int n = 5;

    vector<int> parent(n);
    vector<int> size(n);

    for(int i=0;i<parent.size();i++){
        parent[i] = i;
        size[i]=1;
    }

    unionofelements(0,1,parent,size);

    unionofelements(0,4,parent,size);

    cout<<get(4,parent);

}