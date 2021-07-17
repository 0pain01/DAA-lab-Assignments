#include<iostream>

using namespace std;

void linear_search(int *arr, int key,int n){
int flag=0,cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            flag=1;
            cnt++;
            break;
        }
        else
            cnt++;
    }

    if(flag==1){
        cout<<"Present "<<cnt; }
    else{
        cout<<"Not Present "<<cnt; }
    
}

int main(){
    int t,n,key;   // t : no. of test cases , n: size of array , key: number to be searched
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        cin>>key;
        linear_search(arr,key,n);
    }

return 0;
}