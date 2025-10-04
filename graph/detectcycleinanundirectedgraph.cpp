#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int find(int x,vector<int>& parent){
    if(x==parent[x]) return parent[x];
    else return parent[x] = find(parent[x],parent);
}

bool unionbetweentwo(int a,int b,vector<int>& parents,vector<int>& rank){
    int parenta = find(a,parents);

    int parentb = find(b,parents);

    if(parenta==parentb) return true;

    if(rank[parenta]>=rank[parentb]){
        parents[parentb] = parenta;
         rank[parenta]++;
    }
    else{
        parents[parenta] = parentb;   
        rank[parentb]++;    
    }
    return false;
}

int main(){

    int vertices = 10;
    vector<int> parents(10);

    for(int i=0;i<parents.size();i++){
        parents[i] = i;
    }

    vector<int> rank(vertices,0);

    int edges = 10;

    bool cycle = false;

    for(int i=0;i<edges;i++){
        int src;
        int dest;
        cin>>src>>dest;
        if(unionbetweentwo(src,dest,parents,rank)){
            cycle = true;
            break;
        }
    }

    if(cycle==true) cout<<"cycle detected";
    else cout<<"cycle not detected";
}