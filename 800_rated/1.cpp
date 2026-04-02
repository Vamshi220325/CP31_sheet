#include<bits/stdc++.h>
//my first
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<long long>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    bool flag=true;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1]){flag=false;break;}
    }
    if(flag||k>=2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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