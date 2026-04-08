#include<bits/stdc++.h>
using namespace std;
void solve()
{
      long long n;
      cin>>n;
      vector<long long>arr(n);
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
      bool flag=false;
      long long count=0;
      for(int i=n-2;i>=0;i--)
      {
        int nxt=arr[i+1];
        if(arr[i]<nxt)continue;
        while(arr[i]>=nxt)
        {  if(arr[i]==0&&nxt==0){
            flag=true;break;
        }
            count++;arr[i]/=2;
        }
      }
      if(flag)cout<<-1<<endl;
      else cout<<count<<endl;

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