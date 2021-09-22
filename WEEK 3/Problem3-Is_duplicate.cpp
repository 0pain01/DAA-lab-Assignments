#include<iostream>
#include<algorithm>

using namespace std;
int isDuplicate(int *arr, int n)
{
    sort(arr,arr+n);

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
            return 1; 
    }
    return 0;
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

        int flag= isDuplicate(arr,n);
        if(flag==1)
            cout<<"YES";
        else
            cout<<"NO";
    }
}