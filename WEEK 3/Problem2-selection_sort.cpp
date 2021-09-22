#include<iostream>

using namespace std;

int cmp=0;
int swp=0;


void selectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++){
        min = i;
        for (j = i+1; j < n; j++){
            if (arr[j] < arr[min])
                min = j;
            cmp++;
        }
        int temp = arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        swp++;
    }
}


int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cmp=0;
        swp=0;
        selectionSort(arr, n);
        for (int i=0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        cout<<"comparisons: "<<cmp<<endl;
        cout<<"swap: "<<swp<<endl;
    }
    
    return 0;
}
