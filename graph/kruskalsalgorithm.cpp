#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find(int x,vector<int>& parent){
    if(x==parent[x]) return parent[x];
    else return parent[x] = find(parent[x],parent);
}

bool unionbetweentwo(int a,int b,vector<int>& parent,vector<int>& rank){
    int parenta = find(a,parent);

    int parentb = find(b,parent);

    if(parenta==parentb) return false;

    if(rank[parenta]>=rank[parentb]){
        parent[parentb] = parenta;
        rank[parenta]++;
    }
    else{
        parent[parenta] = parentb;
        rank[parentb]++;
    }
    return true;
}

int main(){
    int vertices;
    cout<<"enter the number of vertices : ";
    cin>>vertices;

    vector<vector<int>> graph;

    int edges;
    cout<<"enter the number of edges : ";
    cin>>edges;

    for(int i=0;i<edges;i++){
        int src;
        int dest;
        int wt;
        cout<<"enter the src,dest : ";
        cin>>src>>dest>>wt;
        graph.push_back({src,dest,wt});
    }


    sort(graph.begin(), graph.end(), [](const vector<int> &a, const vector<int> &b) {
        return a[2] < b[2];
    });

    vector<int> parent(vertices+1);

    for(int i=0;i<parent.size();i++){
        parent[i] = i;
    }

    vector<int> rank(vertices+1,0);

    int weight = 0;

    bool cycle = false;

    for(int i=0;i<graph.size();i++){
        int src = graph[i][0];
        int dest = graph[i][1];
        if(unionbetweentwo(src,dest,parent,rank)){
            weight+=graph[i][2];
        }
    }
    cout<<weight;
}