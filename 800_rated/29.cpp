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
         int count=0;
         for(int i=1;i<n;i++)
         {
            if((arr[i]&1)==(arr[i-1]&1))
            count++;
         }
         cout<<count<<endl;



    }
    return 0;
}