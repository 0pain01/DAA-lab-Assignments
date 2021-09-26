#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool bipartite(int s, int **arr, int node)
{
    vector <int > color(node,-1);

    queue <int> q;
    q.push(s);
    color[s]=1;

    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        for(int i=0;i<node;i++)
        {
            if(arr[front][i]==1 && color[i]==-1 )
                color[i]=1-color[front],q.push(i);
            else if(arr[front][i]==1 && color[i]==color[front])
                return false;
        }
    }
    return true;
}

int main()
{
    int node,edge;
    cin>>node>>edge;
    
    int **arr;
    arr = new int *[node];

    for(int i=0;i<node;i++)
        arr[i]=new int[node];

    for(int i=0;i<node;i++)
    {
        for(int j=0;j<node;j++)
        {
            arr[i][j]=0;
        }
    }

    for(int i=0;i<edge;i++)
    {
        int n1,n2;
        cin>>n1>>n2;
        arr[n1][n2]=1;
        arr[n2][n1]=1;
    }

    if(bipartite(0,arr,node))
        cout<<"Bipartite";
    else
        cout<<"Not Bipartite";

    return 0;
}