#include<iostream>

using namespace std;

void binary_search(int *arr, int key,int l,int r){
int flag=0,cnt=0;

while(l<=r){
    int mid = l+(r-l)/2;
    if (arr[mid]== key){
        flag = 1 ;
        cnt ++;
        break;
    }
else if(arr[mid]>key){
        r = mid-1;
        cnt++;
    }
else{
        l=mid+1;
        cnt++;
    }
}

if (flag==1){
    cout<<"Present "<<cnt;
}
else{
    cout<<"Not Present "<<cnt;
} 

}

int main(){
    int t,n,key;   // t : no. of test cases , n: size of array , key: number to be searched
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>n;
        int arr[n];
        int l=0;
        int r =n-1;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        cin>>key;
        binary_search(arr,key,l,r);
    }

return 0;
}