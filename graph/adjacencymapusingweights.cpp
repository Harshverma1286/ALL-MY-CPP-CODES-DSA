#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void addedge(int src,int des,int wt,bool isbidirectional, vector<vector<pair<int,int>>>& graph){
    graph[src].push_back({des,wt});
    if(isbidirectional){
        graph[des].push_back({src,wt});
    }
}

void printhegraph( vector<vector<pair<int,int>>>& graph){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(int j=0;j<graph[i].size();j++){
            cout<<graph[i][j].first<<","<<graph[i][j].second<<"->";
        }
        cout<<endl;
    }
}

int main(){
    int vertices;
    cout<<"enter the number of vertices :";
    cin>>vertices;

    vector<vector<pair<int,int>>> graph(vertices);

    int edges;
    cout<<"enter the number of edges :";
    cin>>edges;

    for(int i=0;i<edges;i++){
        int src;
        int des;
        bool isbidirectional;
        int wt;
        cout<<"enter the src, des,wt,isbidirectional :";
        cin>>src>>des>>wt>>isbidirectional;
        addedge(src,des,wt,isbidirectional,graph);
    }

    printhegraph(graph);
}