#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int min (vector<bool>visited, vector<int>value)
{
    int min=INT_MAX , min_idx;

    for(int i=0;i<visited.size();i++)
    {
        if(!visited[i] && value[i]<=min)
            min = value[i],min_idx = i;
    }

    return min_idx;
}

void DJK(int sr, vector<vector<int>>arr)
{
    int node = arr.size();
    vector<bool>visited(node,false);
    vector<int>value(node,INT_MAX);

    value[sr]=0;

    for(int i=0;i<node-1;i++)
    {
        int idx = min(visited,value);
        visited[idx]=true;
        for(int j=0;j<node;j++)
        {
            if(arr[idx][j] && value[idx]!=INT_MAX && !visited[j] && value[idx]+arr[idx][j]<=value[j])
            {
                value[j] = arr[idx][j] + value[idx];
            }
        }
    }
    for (int i = 0; i < node; i++)
    {
        cout <<"node: "<< i  << " : " << value[i] << endl;
    }
}


int main()
{
    int node,edge;
    cin>>node>>edge;

    vector<vector<int>>arr (node,vector<int> (node, 0));

    for(int i=0;i<edge;i++)
    {
        int sr,ds,wt;
        cin>>sr>>ds>>wt;

        arr[sr][ds]=wt;
    }

    int source;
    cin>>source;
    DJK(source,arr);

    return 0;
}