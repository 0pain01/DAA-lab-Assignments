#include<iostream>

using namespace std;

int cmp=0;
int swp=0;

void insertionSort(int arr[], int n)
{
    int i, j, t;
    for (i = 1; i < n; i++){
        t = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>t){
            arr[j+1]=arr[j];
            j=j-1;
            cmp++;
        }
        arr[j+1]=t;
        swp++;
    }
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        insertionSort(arr,n);
        
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"comparisons = "<<cmp<<endl;
        cout<<"shifts = "<<swp+cmp;

    }

    return 0;
}