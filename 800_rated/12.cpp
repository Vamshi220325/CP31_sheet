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
   vector<long long>res;
   res.push_back(arr[0]);
   for(int i=1;i<n;i++)
   {
     if(res.back()<=arr[i])
     {
        res.push_back(arr[i]);
     }
     else {
        res.push_back(arr[i]);res.push_back(arr[i]);
     }
   }
   cout<<res.size()<<endl;
   for(int i=0;i<res.size();i++)
   {
    cout<<res[i]<<" ";
   }
   cout<<endl;


    }
    return 0;
}