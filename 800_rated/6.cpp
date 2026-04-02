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
     map<int,int>mp;
      for(int x:arr)
      {mp[x]++;}
      if(mp.size()>2)cout<<"NO"<<endl;
      else if(mp.size()<=1)cout<<"YES"<<endl;
      else
      {
        int f=mp.begin()->second;
        int s=mp.rbegin()->second;
        if(abs(f-s)<=1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
      }   


    }
    return 0;
}