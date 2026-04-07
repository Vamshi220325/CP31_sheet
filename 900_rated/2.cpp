#include<bits/stdc++.h>
using namespace std;
 
int main()
{  int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        for(char &ch:s)
        {
            mp[ch]++;
        }
        int oddCount=0;
        for(auto &m:mp)
        {
            if(m.second&1)oddCount++;
        }
        if(oddCount-1<=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}