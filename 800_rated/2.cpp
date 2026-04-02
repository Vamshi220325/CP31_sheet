#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
    
        for(int i=0;i<n;i++)
        {
         cin>>arr[i];
        }
        int res=arr[0];
        
        for(int i=1;i<n;i++)
        {
            res=max(res,arr[i]-arr[i-1]);
        }
        res=max(res,2*(x-arr[n-1]));
        cout<<res<<endl;
        
    }
    return 0;
}