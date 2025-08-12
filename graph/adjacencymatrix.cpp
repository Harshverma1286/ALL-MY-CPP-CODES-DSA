#include<iostream>
#include<vector>
using namespace std;

void addedges(int src,int des,bool isbidirectional,vector<vector<int>>& graph){
    graph[src][des] = 1;
    if(isbidirectional){
        graph[des][src] = 1;
    }
}

void printgraph(vector<vector<int>>& graph){
    for(int i=0;i<graph.size();i++){
        for(int j=0;j<graph[i].size();j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int vertices;
    cout<<"enter the number of vertices : ";
    cin>>vertices;

    vector<vector<int>> graph(vertices,vector<int>(vertices,0));

    int edges;
    cout<<"enter the number of edges : ";
    cin>>edges;

    for(int i=0;i<edges;i++){
        int src;
        int des;
        bool isbidirectional;
        cout<<"enter the src,dest,isbidirectional : ";
        cin>>src>>des>>isbidirectional;
        addedges(src,des,isbidirectional,graph);
    }


    printgraph(graph);
}