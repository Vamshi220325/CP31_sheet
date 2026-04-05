#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        bool flag=false;
        long long res=1e9;
        for(int i=1;i<n;i++)
        {
              long long temp=arr[i]-arr[i-1];
              if(temp<0){flag=true;break;}
              else {
                res=min(res,temp/2+1);
              }
        }
        if(flag)cout<<0<<endl;
        else cout<<res<<endl;



    }
    return 0;
}