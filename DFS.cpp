#include<bits/stdc++.h>
using namespace std;
#define pb push_back
const int N=1e5+5;
vector<bool> visited(N,false);
vector<int> adjl[N];

void dfs(int node)
{
    //preorder
    visited[node]=true;
    cout<<node<<" ";

    //inorder
    for(auto x:adjl[node])
    {
        if(!visited[x])
            dfs(x);
    }
    
}

int main()
{
    int n,m,root;
    cin>>n>>m;
    for (int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adjl[x].pb(y);
        adjl[y].pb(x);
    }
    cin>>root;

    dfs(root);
    return 1;

}
