#include <bits/stdc++.h>
using namespace std;

// Recursive DFS function
void dfsRec(vector<vector<int>> &adj, vector<bool> &visited, int s, vector<int> &res)
{
    visited[s] = true;
    res.push_back(s);  

    for (int i : adj[s])
    { 
        if (!visited[i])
        {
            dfsRec(adj, visited, i, res); 
        };
    }
}

// DFS wrapper function
vector<int> DFS(vector<vector<int>> &adj)
{
    vector<bool> visited(adj.size(), false); 
    vector<int> res;                         

    dfsRec(adj, visited, 0, res); 
    return res;
}

int main()
{
    vector<vector<int>> adj = {
        {1, 2},      
        {0, 2},       
        {0, 1, 3, 4}, 
        {2},         
        {2}           
    };

    vector<int> res = DFS(adj);

    for (int node : res)
    {
        cout << node << " ";
    }

    return 0;
}