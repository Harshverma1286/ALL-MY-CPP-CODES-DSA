#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void addedge(int src,int des,bool isdirectional, vector<unordered_set<int>>& graph){
    graph[src].insert(des);
    if(isdirectional){
        graph[des].insert(src);
    }
}

void printgraph(vector<unordered_set<int>>& graph){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto s:graph[i]){
            cout<<s<<"->";
        }
        cout<<endl;
    }
}

int main(){
    int vertices;
    cout<<"enter the number of vertices :";
    cin>>vertices;

    vector<unordered_set<int>> graph(vertices);

    int edges;
    cout<<"enter the number of edges:";
    cin>>edges;

    for(int i=0;i<edges;i++){
        int src;
        int des;
        bool isdirectional;
        cout<<"enter the src,des,isdirectional :";
        cin>>src>>des>>isdirectional;

        addedge(src,des,isdirectional,graph);
    }

    printgraph(graph);


}