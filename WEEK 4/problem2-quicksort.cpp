#include<iostream>

using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr,int l, int h)
{
    int pivot = arr[l];
    int start = l, end = h ;

    while(start<end)
    {
        while(arr[start]<= pivot)
        {
            start++;
        }

        while(arr[end]> pivot)
        {
            end--;
        }

        if(start<end)
        {
            swap(&arr[start],&arr[end]);
        }
    }

    swap(&arr[l],&arr[end]);

    return end;
} 

void quickSort(int *arr, int l, int h)
{
    if(l<h)
    {
        int loc = partition(arr,l,h);
        quickSort(arr,l,loc-1);
        quickSort(arr,loc+1,h);
    }
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

        quickSort(arr,0,n-1);

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }

    }
}