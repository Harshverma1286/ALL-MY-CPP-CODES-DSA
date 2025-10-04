#include<iostream>
#include<vector>
using namespace std;

int get(int x,vector<int>& parent){
    if(parent[x]==x) return parent[x];
    return parent[x] = get(parent[x],parent);
}

void unionofelements(int a,int b,vector<int>& parents,vector<int>& rank){
    int parenta = get(a,parents);
    int parentb = get(b,parents);

    if(rank[parenta]>=rank[parentb]){
        parents[parentb] = parenta;
        rank[parenta]++;
    }
    else{
       parents[parenta] = parentb;
       rank[parentb]++;
    }
}

int main(){
    int n = 5;

    vector<int> parent(n+1);
    vector<int> rank(n+1,0);

    for(int i=0;i<parent.size();i++){
        parent[i] = i;
        rank[i]=1;
    }

    unionofelements(0,1,parent,rank);

    unionofelements(0,4,parent,rank);

    cout<<get(4,parent);

}