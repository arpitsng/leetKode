#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>

using namespace std;

void dfs(int node, int parent, vector<int> &disc, vector<int> &low, vector<bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &ap, int &timer){
    visited[node] = true;
    disc[node] = low[node] = timer++;
    int child = 0;

    for(auto nbr: adj[node]){
        if(nbr == parent) continue;

        if(!visited[nbr]){
            dfs(nbr, node, disc, low, visited, adj, ap, timer);
            low[node] = min(low[node], low[nbr]);

            //check ap or not
            if(low[nbr] >= disc[node] && parent != -1){
                ap[node] = 1; // mark true;
            }
            child++;
        }

        else{
            //back edge
            low[node] = min(low[node], disc[nbr]);
        }
    }

    if(parent == -1 && child > 1){
        ap[node] = 1;
    }
}


int main(){
    // Example edges array
    vector<vector<int>> edges = {{0,1}, {1,2}, {2,3}, {3,4}, {1,3}};
    int n = 5;
    int e = 5;
    
    //create adj
    unordered_map<int, list<int> > adj;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0;
    vector<int> disc(n, -1);
    vector<int> low(n, -1);
    vector<int> parent(n, -1);
    vector<bool> visited(n, false);
    vector<int> ap(n, 0);
    int parent_val = -1;


    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs(i, parent_val, disc, low, visited, adj, ap, timer);
        }
    }

    cout<<"Articulation points are: "<<endl;
    for(int i=0; i<n; i++){
        if(ap[i] == 1){
            cout<<i<<" ";
        }
    }
    cout<<endl;


    return 0;
}