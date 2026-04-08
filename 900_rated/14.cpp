#include<bits/stdc++.h>
using namespace std;
void solve()
{
      long long n;
      cin>>n;
      if(n<4||n&1)cout<<-1<<endl;
      else
      {
        if(n%6!=0)cout<<n/6+1<<" ";
        else cout<<n/6<<" ";
        cout<<n/4<<endl;
      }

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