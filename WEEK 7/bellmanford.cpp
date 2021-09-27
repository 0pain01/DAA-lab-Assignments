#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

struct edge{
    int source;
    int destination;
    int weight;
};

void BMF(struct edge A[],int src, int node, int edge){
    vector<int> value(node,INT_MAX);
    value[src]=0;
    for(int i=0;i<node-1;i++){
        for(int j=0;j<edge;j++){
            int u=A[j].source;
            int V=A[j].destination;
            int wt=A[j].weight;
            if(value[u]!=INT_MAX && value[u]+wt<value[V])
            {
                value[V]=value[u]+wt;
            }
        }
    }

    int flag=0;
    for(int i=0;i<edge;i++){
            int u=A[i].source;
            int V=A[i].destination;
            int wt=A[i].weight;
        if(value[u]+wt<value[V]){
            flag=1;
            break;
        }
    }

    if(flag) 
        cout<<"Negative cycle exists !!";
    else
    {
        for(int i=0;i<node;i++)
        {
            cout<<"node: "<<i<<" - "<<value[i]<<endl;
        }
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    struct edge A[edge];
    for (int i = 0; i < edge; i++)
    {
        int src, ds, wt;
        cin >> src >> ds >> wt;
        A[i].source=src;
        A[i].destination=ds;
        A[i].weight=wt;
    }
    int source;
    cin >> source;
    BMF(A, source,node,edge);
    return 0;
}