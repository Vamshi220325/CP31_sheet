#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
       int n,m;
       cin>>n>>m;
       string x,s;
       cin>>x;
       cin>>s;
       string s0=x;
       string s1=s0+s0;
       string s2=s1+s1;
       string s3=s2+s2;
       string s4=s3+s3;
       string s5=s4+s4;
       if(s0.find(s)!=string::npos)
       {cout<<0<<endl;}
       else if(s1.find(s)!=string::npos)
       {cout<<1<<endl;}
         else if(s2.find(s)!=string::npos)
       {cout<<2<<endl;}
         else if(s3.find(s)!=string::npos)
       {cout<<3<<endl;}
         else if(s4.find(s)!=string::npos)
       {cout<<4<<endl;}
         else if(s5.find(s)!=string::npos)
       {cout<<5<<endl;}
       else cout<<-1<<endl;



    }
    return 0;
}