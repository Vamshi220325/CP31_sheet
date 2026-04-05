#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int neg=0,sum=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==-1)neg++;
        sum+=arr[i];

    }
    int op=0;
    if(neg&1){neg--;sum+=2;op++;}
    while(sum<0)
    {
          op+=2;
          neg-=2;
          sum+=4;
    }
    
    cout<<op<<endl;

    }
    return 0;
}