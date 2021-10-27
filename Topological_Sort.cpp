#include<bits/stdc++.h>
using namespace std;
#define pb push_back
const int N=1e5+5;
vector<bool> visited(N,false);
vector<int> adjl[N];
/* Remember that if all nodes are not printed eventually it will have a cycle and will 
not classify as topological sort and is a cyclic grph */

int main()
{
    int n,m,count=0;
    cin>>n>>m;
    vector<int> indegree(n,0);
    for (int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adjl[x].pb(y);  //x --> y
        indegree[y]++;
    }

    queue<int> q;

    for(int i=0;i<n;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }

    while(!q.empty())
    {
        count++;
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        for(auto x: adjl[x])
        {
            indegree[x]--;
            if(indegree[x]==0)
                q.push(x);
        }

    }

    return 1;
}
