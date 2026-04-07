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
     for(int i=0;i<n;i++)
     { if(i+1!=arr[i])
        {int temp=abs(i-(arr[i]-1));
            res=__gcd(res,temp);
        
     }
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