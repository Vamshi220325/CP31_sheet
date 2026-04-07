#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,q;
    cin>>n>>q;
    vector<long long>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<long long>preSum(n);
    preSum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        preSum[i]=preSum[i-1]+arr[i];
    }
    for(int i=1;i<=q;i++)
    {
        int l,r,k;
        cin>>l>>r>>k;
        long long sum=preSum[n-1]-(preSum[r-1]-(l-2>=0?preSum[l-2]:0))+(r-l+1)*k;
        if(sum&1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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