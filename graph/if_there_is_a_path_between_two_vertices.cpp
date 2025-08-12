#include<iostream>
#include<vector>
#include<unordered_set>
#include<list>
using namespace std;

void addedge(int src,int dest,bool isbidirectional,vector<list<int>>& graph){
    graph[src].push_back(dest);
    if(isbidirectional){
        graph[dest].push_back(src);
    }
}

bool ifpath(int start,int end,vector<list<int>>& graph,unordered_set<int>& isvisited){
    if(start==end) return true;

    isvisited.insert(start);
    for(auto neighbour:graph[start]){
        if(isvisited.find(neighbour)==isvisited.end()){
            bool ans = ifpath(neighbour,end,graph,isvisited);
            if(ans) return true;
        }
    }
    return false;
}

bool ifpathexist(int start,int end,vector<list<int>>& graph,unordered_set<int>& isvisited){
    return ifpath(start,end,graph,isvisited);
}

int main(){
    int vertices;
    cout<<"enter the number of vertices : ";
    cin>>vertices;

    vector<list<int>> graph(vertices);

    unordered_set<int> isvisited;

    int edges;
    cout<<"enter the number of edges : ";
    cin>>edges;

    for(int i=0;i<edges;i++){
        int src;
        int dest;
        bool isbidirectional;
        cout<<"enter the src,dest,isbidirectional : ";
        cin>>src>>dest>>isbidirectional;
        addedge(src,dest,isbidirectional,graph);
    }
    int start;
    cout<<"enter the starting point :";
    cin>>start;

    int end;
    cout<<"enter the ending point :";
    cin>>end;

    bool ans = ifpathexist(start,end,graph,isvisited);

    if(ans){
        cout<<"yes there exist a path";
    }
    else{
        cout<<"no there does not exist any path";
    }
}