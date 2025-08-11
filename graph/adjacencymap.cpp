#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void addedge(int src,int des,bool isbidirectional,vector<vector<int>>& graph){
    graph[src].push_back(des);
    if(isbidirectional){
        graph[des].push_back(src);
    }
}

void printhegraph(vector<vector<int>>& graph){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(int j=0;j<graph[i].size();j++){
            cout<<graph[i][j]<<"->";
        }
        cout<<endl;
    }
}

int main(){
    int vertices;
    cout<<"enter the number of vertices :";
    cin>>vertices;

    vector<vector<int>> graph(vertices);

    int edges;
    cout<<"enter the number of edges :";
    cin>>edges;

    for(int i=0;i<edges;i++){
        int src;
        int des;
        bool isbidirectional;
        cout<<"enter the src, des,isbidirectional :";
        cin>>src>>des>>isbidirectional;
        addedge(src,des,isbidirectional,graph);
    }

    printhegraph(graph);
}