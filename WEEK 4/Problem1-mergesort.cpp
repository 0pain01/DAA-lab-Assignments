#include<iostream>

using namespace std;
int merge(int *arr,int l, int m, int r)
{
    int i=l, j = m+1, k=l;
    int b[100], cnt=0;

    while(i<=m && j<=r)
    {
        if(arr[i]< arr[j])
        {
            b[k]=arr[i];
            i++;
        }
        else
        {
            b[k]=arr[j];
            cnt+=m+1-i;
            j++;
        }
        k++;
    }

    if(i>m)
    {
        while(j<=r)
        {
            b[k]=arr[j];
            k++;
            j++;
        }
    }

    if(j>r){
        while(i<=m)
        {
            b[k]=arr[i];
            k++;i++;
        }
    }

    for(i=l;i<=r;i++)
    {
        arr[i]=b[i];
    }

    return cnt;
}
int merge_sort(int *arr, int l,int r)
{
    int cnt=0;
    if(l<r)
    {
        int m = l+(r-l)/2;
        cnt+=merge_sort(arr,l,m);
        cnt+=merge_sort(arr,m+1,r);
        cnt+=merge(arr,l,m,r);
    }
    return cnt;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        cout<<"inversions: "<<merge_sort(arr,0,n-1)<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }

    }

    return 0;
}