#include<iostream>
#include<vector>
#include<list>
using namespace std;

void addedges(int src,int dest,int wt,bool isbidirectional,vector<list<pair<int,int>>>& graph){
    graph[src].push_back({dest,wt});
    if(isbidirectional){
        graph[dest].push_back({src,wt});
    }
}

void printthegraph(vector<list<pair<int,int>>>& graph){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto edges:graph[i]){
            cout<<edges.first<<","<<edges.second<<"->";
        }
        cout<<endl;
    }
}

int main(){
    int vertices;
    cout<<"enter the number of vertices :";
    cin>>vertices;

    vector<list<pair<int,int>>> graph(vertices);

    int edges;
    cout<<"enter the number of edges :";
    cin>>edges;

    for(int i=0;i<edges;i++){
        int src;
        int dest;
        bool isbidirectional;
        int wt;
        cout<<" enter the src,des,bidirectional :";
        cin>>src>>dest>>wt>>isbidirectional;
        addedges(src,dest,wt,isbidirectional,graph);
    }

    printthegraph(graph);
}