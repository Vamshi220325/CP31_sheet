#include<bits/stdc++.h>
using namespace std;
void solve()
{
     string s,x;
     cin>>s>>x;
     int n1=s.size();
     int n2=x.size();
     int i=n1-1,j=n2-1;
     unordered_map<char,int>mp1,mp2;
     bool flag=false;
     while(i>=0 && j>=0)
     {
         if(s[i]==x[j])
         {   if(mp1[s[i]]!=mp2[x[j]])
            {
                  flag=true;break;
                  
            }
            mp2[x[j]]++;
             j--;
         }
         
         mp1[s[i]]++;
         i--;
     }
     if(j!=-1 || flag)cout<<"NO"<<endl;
     else cout<<"YES"<<endl;


    }
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}