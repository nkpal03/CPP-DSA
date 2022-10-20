// Bellman ford algorithm for shortest path finding

#include<bits/stdc++.h>
using namespace std;

class Node{         //Node class
    
    public:

    int u,v,wt;     //u->start, v->end, wt->weight

    Node(int first, int second, int weight){                    //Node constructor

        u = first;                                      //initializing u
        
        v = second;                                 //initializing v
        
        wt = weight;                            //initializing wt
    
    }
};

int main(){

    int n,m; cin>>n>>m;                 //n->no. of vertices, m->no. of edges

    vector<Node> edges;                 //vector of edges

    
    int inf = 10000000;                 //initializing inf to a large value
    
    vector<int> dist(n,inf);                //vector of distances from source to all vertices
    
    for(int i=0;i<m;i++){                   //taking input of edges
    
        int u,v,wt; cin>>u>>v>>wt;              //u->start, v->end, wt->weight
    
        edges.push_back(Node(u,v,wt));              //pushing the edge into the vector
    
    }

    
    int src; cin>>src;                          //taking input of source vertex
    
    dist[src] = 0;                              //distance of source vertex from itself is 0
    
    for(int i=1;i<=n-1;i++){                    //relaxing all edges n-1 times
    
        for(auto it: edges){                            
    
            if(dist[it.v] > dist[it.u]+it.wt){                  //relaxing the edge
    
                dist[it.v] = dist[it.u] + it.wt;                //updating the distance
    
            }
    
        }
    
    }

    int flag = 0;                                   //flag to check if there is a negative cycle
    
    for(auto it: edges){
    
        if(dist[it.v] > dist[it.u]+it.wt){              //if there is a negative cycle
    
            cout<<-1;                                     //print -1
    
            flag = 1;                                    //update flag
    
            break;                                       //break out of the loop
    
        }
    
    }

    if(!flag){                                                  //if there is no negative cycle
    
        for(int i=1;i<=n;i++) cout<<dist[i]<<" ";                   //print the distances
    
    }

    return 0;

}