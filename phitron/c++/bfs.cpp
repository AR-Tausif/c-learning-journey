#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[100];
bool vis[100];
void bfs(int source_map)
{
    queue<int> q;
    q.push(source_map);
    vis[source_map] = true;
    while(!q.empty())
    {
        // queue theke ber kore niye asa
        int par = q.front();
        q.pop();
        // oi node ke nie kaj
        cout << par << " ";
        // childdren gulo push kora
        for(int child : adj_list[par])
        {
            if(vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
    
}
int main()
{
    int n,e;
    cin >> n >> e;
    // taking input with adjacency list method
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // for undirected graph
    }
    memset(vis, false, size(vis));
    bfs(0); // zero is a source map of this grpah

    return 0;
}