#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    
    long long sum=b;
    for(long long x:arr)
    {
        sum+=min(x,a-1);
    }
    cout<<sum<<endl;
}
int main()
{  int t;
    cin>>t;
    while(t--)
    {
      solve();



    }
    return 0;
}