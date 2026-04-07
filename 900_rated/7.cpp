#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    long long k;
    cin>>k;
    vector<long long>arr(n);

    for(int i=0;i<n;i++)
    cin>>arr[i];
        sort(arr.begin(),arr.end());
    
     int maxi=1,temp=1;
    for(int i=1;i<n;i++)
    {
      if(arr[i]-arr[i-1]>k)
      {
        temp=1;
      }
      else
      {
        temp++;maxi=max(maxi,temp);
      }
    }
    cout<<n-maxi<<endl;
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