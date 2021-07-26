#include<iostream>
#include<cmath>

using namespace std;

void diff_count(int *arr,int n,int key){
int cnt=0;
    for (int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){   
            if(abs(arr[i]-arr[j])==key){
                cnt++;
            }
        }
    }

    cout<<cnt;
}

int main(){
    int t,n,key;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        cin>>key;
        diff_count(arr,n,key);
    }
    return 0;
}