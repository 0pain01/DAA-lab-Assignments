#include<iostream>
#include<algorithm>
using namespace std;

void pairsum(int *arr,int n,int key)
{   
    sort(arr,arr+n);
    int i=0,j=n-1;

    int flag = 0;
    while(i<j)
    {
        if(arr[i]+arr[j]==key)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            flag=1;
            i++;
            j--;
        }
        if(arr[i]+arr[j]<key)
        {
            i++;
        }
        if(arr[i]+arr[j]>key)
        {
            j--;
        }
    }

    if(flag==0)
        cout<<"no pair exist";
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
        int key;
        cin>>key;
        pairsum(arr,n,key);
    }

    return 0;
}