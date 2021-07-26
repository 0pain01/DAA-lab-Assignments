#include<iostream>

using namespace std;

void binary_search(int *arr, int key,int n){
int flag=0,cnt=0;
int l=0;
int r = n-1;
while(l<=r){
    int mid = l+(r-l)/2;
    if (arr[mid]== key){
        flag = 1 ;
        break;
    }
else if(arr[mid]>key){
        r = mid-1;
    }
else{
        l=mid+1;
    }
}

if (flag==1){
    for(int j=0;j<n;j++){
        if(arr[j]==key)
            cnt++;
    }
    cout<<key<<" - "<<cnt;
}
else{
    cout<<"Key not Present ";
} 

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
        binary_search(arr,key,n);
    }

return 0;
}