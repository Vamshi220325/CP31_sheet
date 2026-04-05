#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      vector<int>arr(n);
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
     int count=0;
     for(int x:arr)
     {
        if(x&1)
        {
            count++;
        }
     }
     if(count%2==0)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;


    }
    return 0;
}