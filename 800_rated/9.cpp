#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      vector<int>arr(n-1);
      for(int i=0;i<n-1;i++)
      {
        cin>>arr[i];
      }
      long long sum=0;
      for(int x:arr)
      {
        sum+=x;
      }
      cout<<-1*sum<<endl;



    }
    return 0;
}