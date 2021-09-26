#include<iostream>

using namespace std;

int node;
int **arr;
bool *visited = new bool[node];

int DFS(int sr, int ds ,int *k)
{
    if(sr==ds)
        return 1;

    visited[sr]=true;
    
    for(int i=0;i<node;i++)
    {
        if(arr[sr][i]==1 && visited[i]==false)
        {
            *k=*k+DFS(i,ds,k);
        }
    }

    return *k;
}

int main()
{
    int edge;
    cin>>node>>edge;
    
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
    cout<<"enter source and destination: ";

    int sr,ds;
    cin>>sr>>ds;

    for(int i=0;i<node;i++)
        visited[i]=false;

    int k = DFS(sr,ds,&k);

    if(k==0)
        cout<<"no path exist!!";
    else 
        cout<<"path exist!!";

    return 0;
}