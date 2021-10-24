// Graph Theory
//DFS and BFS Traversals
//In Degree and Out Degree
//Connected Components (Mainly in disconnected graphs)
//Cycles in a graphs Cyclic and Acyclic graphs
// Tree (Connected Acyclic Graph)
//N nodes and N-1 edges
// DAGs 
//Complete Graph where each vertex is connevcvted to every other node by a direct edje
// complete graphs have nC2 edges
//Weighted Graphs are graphs with weighted edges

#include<bits/stdc++.h>
using namespace std;
#define pb push_back


//Adjacency Matrix nodes starting with 0 index

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adjm(n,vector<int>(n));
    
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;
    }
    
    //Displaying the Adjacency Matrix should be diagonally symmetric in case of undirected graphs
    
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<adjm[i][j];
        cout<<endl;
    }
    
    //Adjacency List
    vector<int>adjl[m];
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adjl[x].pb(y);
        adjl[y].pb(x);
    }
    
    //displaying the adjacency List
    
    for(int i=0;i<n;i++)
    {
        cout<<i<<" ->";
        for(auto x:adjl[i])
            cout<<x<<" ";
        cout<<endl;
    }
    
    
    
}
