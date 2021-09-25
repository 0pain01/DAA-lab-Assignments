#include<iostream> 
#include<algorithm>
using namespace std;

bool comp(int a , int b)
{
    return a<b;
}

void dupl(char arr[], int n )
{
    int count[26]={0};
    char ch;

    for(int i=0;i<n;i++)
    {
        count[arr[i]-'a']++;
    }

    int mx = *max_element(count,count+26,comp);

    if(mx==1 || mx==0)
        cout<<"No duplicates";
    else
        {
            cout<<"duplicates having max freq:"<<endl;
            for(int i=0;i<26;i++)
            {
                if(mx==count[i])
                {
                    char k = 'a'+i;
                    cout<<k<<":"<<mx<<endl;
                }
            }
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
        char arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        dupl(arr,n);
    
    }

    return 0;
}