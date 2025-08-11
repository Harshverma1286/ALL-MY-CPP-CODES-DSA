#include<iostream>
#include<vector>
#include<list>
using namespace std;

void addedges(int src,int dest,bool isbidirectional,vector<list<int>>& graph){
    graph[src].push_back(dest);
    if(isbidirectional){
        graph[dest].push_back(src);
    }
}

void printthegraph(vector<list<int>>& graph){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto edges:graph[i]){
            cout<<edges<<"->";
        }
        cout<<endl;
    }
}

int main(){
    int vertices;
    cout<<"enter the number of vertices :";
    cin>>vertices;

    vector<list<int>> graph(vertices);

    int edges;
    cout<<"enter the number of edges :";
    cin>>edges;

    for(int i=0;i<edges;i++){
        int src;
        int dest;
        bool isbidirectional;
        cout<<" enter the src,des,bidirectional :";
        cin>>src>>dest>>isbidirectional;
        addedges(src,dest,isbidirectional,graph);
    }

    printthegraph(graph);
}