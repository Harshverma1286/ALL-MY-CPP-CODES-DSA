#include<iostream>
#include<vector>
using namespace std;

int get(int x,vector<int>& parent){
    if(parent[x]==x) return parent[x];
    else return parent[x] = get(parent[x],parent);
}

void unionbtele(int x,int y,vector<int>& parent,vector<int>& size,vector<int>& mn,vector<int>& mx){
    x = get(x,parent);
    y = get(y,parent);

    if(x==y) return;

    if(size[x]>=size[y]){
        size[x]+=size[y];

        parent[y]=x;

        mn[x] = min(mn[x],mn[y]);
        mx[x] = max(mx[x],mx[y]);
    }
    else{
        size[y]+=size[x];
        parent[x]=y;

        mn[y] = min(mn[x],mn[y]);
        mx[y] = max(mx[x],mx[y]);
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> parent(n+1);

    vector<int> size(n+1,1);
    vector<int> mn(n+1);
    vector<int> mx(n+1);

    for(int i=0;i<=n;i++){
        parent[i]=i;
        mx[i]=i;
        mn[i]=i;
    }
    while(m--){
        string type;
        cin>>type;
        if(type=="union"){
            int x,y;
            cin>>x>>y;
            unionbtele(x,y,parent,size,mn,mx);
        }
        else if(type=="get"){
            int x;
            cin>>x;
            int idx = get(x,parent);

            cout<<mn[idx]<<" "<<mx[idx]<<" "<<size[idx];
        }
    }
}