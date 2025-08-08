#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[] = {100,80,60,70,60,75,85};

    int n = sizeof(arr)/sizeof(arr[0]);

    int pgeidx[n];
    stack<int> st;

    pgeidx[0] = -1;
    st.push(0);

    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            pgeidx[i] = -1;
        }
        else pgeidx[i] = st.top();
        st.push(i);
    }

    int ans[n];
    ans[0] = 1;
    for(int i=1;i<n;i++){
        ans[i] = abs(i-pgeidx[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

}