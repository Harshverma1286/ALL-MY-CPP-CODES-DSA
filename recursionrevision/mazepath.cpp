#include<iostream>
using namespace std;

int mazepath(int sr,int sc,int dr,int dc){
    if(sr>dr || sc>dc){
        return 0;
    }
    if(sr==dr && sc==dc ) return 1;

    int rightways = mazepath(sr,sc+1,dr,dc);
    int downways = mazepath(sr+1,sc,dr,dc);
    int totalnoofways = rightways+downways;

    return totalnoofways;
}

void printpath(int sr,int sc,int dr,int dc,string s){
    if(sr>dr || sc>dc) return;
    if(sr==dr && sc==dc){
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,dr,dc,s+'r');
    printpath(sr+1,sc,dr,dc,s+'d');
}

int main(){
    int sr;
    cin>>sr;
    int sc;
    cin>>sc;
    int dr;
    cin>>dr;
    int dc;
    cin>>dc;

    printpath(sr,sc,dr,dc,"");

    cout<<mazepath(sr,sc,dr,dc);

}