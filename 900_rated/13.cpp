#include<bits/stdc++.h>
using namespace std;
void solve()
{
      int n;
      cin>>n;
      vector<long long>arr(n);
      int count0=0;
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
        if(arr[i]==0)count0++;
      }
      if(count0==n){cout<<0<<endl;return ;}
      int left=0,right=n-1;
      while(arr[left]==0)
      {
        left++;
      }
      while(arr[right]==0)
      {
        right--;
      }
      bool flag=false;
      for(int i=left;i<=right;i++)
      {
        if(arr[i]==0){flag=true;break;}
      }
      if(!flag)cout<<1<<endl;
      else cout<<2<<endl;
    


    }
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}