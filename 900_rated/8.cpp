#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    string arr;
    cin>>arr;
    int i=0,j=1;
    int res=0;
    while(j<n)
    {
        if(arr[j]!=arr[j-1])
        {
            res=max(res,j-i+1);
            i=j;
        }
        j++;
    }
    res=max(res,j-i+1);
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