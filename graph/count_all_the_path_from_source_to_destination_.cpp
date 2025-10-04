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

int ifpath(int start,int end,vector<list<int>>& graph,unordered_set<int>& isvisited){
    if(start==end) return 1;

    isvisited.insert(start);
    int ans = 0;
    for(auto neighbour:graph[start]){
        if(isvisited.find(neighbour)==isvisited.end()){
            ans+=ifpath(neighbour,end,graph,isvisited);
        }
    }
    isvisited.erase(start);
    return ans;
}

int thenumberofpaths(int start,int end,vector<list<int>>& graph,unordered_set<int>& isvisited){
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

    cout<<thenumberofpaths(start,end,graph,isvisited);
}