#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
           int n,k;
           cin>>n>>k;
           long long x;
           cin>>x;
           long long minSum=(long long)(k)*(k+1)/2;
           long long maxSum=(long long)(n)*(n+1)/2-(long long)(n-k)*(n-k+1)/2;
           if(x>=minSum&&x<=maxSum)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;



    }
    return 0;
}