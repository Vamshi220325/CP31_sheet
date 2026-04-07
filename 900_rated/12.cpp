#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=0;
    res=arr[n-1]-arr[0];
    for(int i=0;i<n;i++)
    {  
        res=max(res,(arr[n-1]-arr[i]));
        res=max(res,(arr[i]-arr[0]));
        if(i+1<n)res=max(res,arr[i]-arr[i+1]);
    }
    
    cout<<res<<endl;
    
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