#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

template <typename t > 
class graph{
    public:
        unordered_map<t, list<t>> adj;

        //add edge btw u and v
        void addEdge(t u, t v, bool direction){

            //dir 1 = directed
            //dir 0 = undirected

            adj[u].push_back(v);
            if(direction == 0){
                adj[v].push_back(u);
            }
        }

        void printAdj(){
            for(auto i: adj){
                cout<< i.first<< "->";
                for(auto j: i.second){
                    cout<<j<<", ";
                }
                cout<<endl;
            }
        }

};

int main()
{
    cout<<"enter no. of nodes"<<endl;
    int n;
    cin>> n;

    cout<<"enter no. of edges"<<endl;
    int m;
    cin>> m;

    graph<int> g;

    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;

        g.addEdge(u,v, 0); //undirected for now
    }

    g.printAdj();


    return 0;
}

//coding ninjas quess-- print and create adjacency list
// vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {

//     vector<int> ans[n];  //square brackets means vector<vector<int>> of n size

//     for(int i=0; i<m; i++){

//         int u = edges[i][0];
//         int v = edges[i][1];

//         ans[u].push_back(v);
//         ans[v].push_back(u);

//     }

//     vector<vector<int>> adj(n);
//     for(int i=0; i<n; i++){
//         adj[i].push_back(i); //as per output formmat//

//         //entering neighbours
//         for(int j=0; j<ans[i].size(); j++){
//             adj[i].push_back(ans[i][j]);
//         }


//     }

//     return adj;
// }