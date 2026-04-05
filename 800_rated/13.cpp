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
      long long mini=1e18;
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
       
      }
      sort(arr.begin(),arr.end());
      vector<long long>c;
      c.push_back(arr[n-1]);
      int i=n-2;
      while(i>=0&&c[0]==arr[i])
      {
        c.push_back(arr[i]);
        i--;
      }
      if(c.size()==n)cout<<-1<<"\n";
      else
      {  cout<<i+1<<" "<<n-(i+1)<<endl;
         for(int j=0;j<=i;j++)cout<<arr[j]<<" ";
         cout<<"\n";
         for(int x:c)cout<<x<<" ";
          cout<<"\n";
      }
      
      }

    return 0;
}