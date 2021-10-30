#include<bits/stdc++.h>
using namespace std;
#define pb push_back
const int N=1e5+5;
vector<bool> visited(N,false);
vector<int> adjl[N];

bool iscycle(int u,int parent)
{
    visited[u]=true;
    for(int v:adjl[u])
    {
        if(!visited[v])
        {
            if(iscycle(v,u))
                return true;
        }
        else if(v!=parent)
            return true;
    }
    return false;
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

    bool cycle=false;

    for(int i=0;i<n;i++)
    {
        if(!visited[i] and iscycle(i,-1))
        {
            cycle=true;
            break;
        }
    }

    if(cycle)
        cout<<"Cycle Exists";
    else
        cout<<"No Cycle Exists";
}
