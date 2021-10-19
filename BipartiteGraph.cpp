#include <bits/stdc++.h>
using namespace std;
#define pb push_back

bool check=true;

void colour(int u, int curr_colr, int col[], bool vis[], adj[][])
{
    if(col[u]!=-1 && col[u]!=curr_colr)
        check=false;
    else
        col[u]=curr_colr;
    
    
    if(vis[u]!=true)
    {
        vis[u]=true;
            
        for(auto i: adj[u])
            colour(i, curr xor 1);
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int ar[n];
        
        for(int i=0;i<n;i++)
            cin>>ar[i];
            
        cin>>m;
        
        adj = vector<vector<int>>(n);
        bool vis[n]={false};
        int col[n]={-1};
        
        for(int i=0;i<m;i++)
        {
            int u,v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        
        // Traversal
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                col[i]=0;
                
            }
        }
    }
}
