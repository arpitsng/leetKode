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