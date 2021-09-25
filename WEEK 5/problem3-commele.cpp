#include<iostream>
using namespace std;

void comele(int *a,int *b, int n, int m)
{
    int i=0,j=0,flag=0;
    while(i<n && j<m)
    {
        if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
            flag=1;
        }
        if(a[i]<b[j])
        {
            i++;
        }
        if(a[i]>b[j])
        {
            j++;
        }
    }

    if(flag==0)
        cout<<"no common elements";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int m;
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }

        comele(a,b,n,m);
    }
    return 0;
}