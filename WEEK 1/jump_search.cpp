#include<iostream>
#include<cmath>

using namespace std;

void jump_search(int *arr, int key,int n){
int flag=0,cnt=0,prev=0;
int jump = sqrt(n);


while(arr[jump]<=key && jump < n){
    cnt++;
    prev = jump;
    jump+=sqrt(n);
    if(jump > n-1){
        jump=n;
        break;
    }
}

for(int i= prev;i<jump;i++){
    if(arr[i]==key){
        cnt++;
        flag=1;
        break;
    }
    else
        cnt++;
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
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        cin>>key;
        jump_search(arr,key,n);
    }

return 0;
}