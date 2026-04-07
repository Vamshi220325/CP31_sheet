#include<bits/stdc++.h>
using namespace std;
void fun(set<pair<int,int>>&st,int xk,int yk,int a,int b)
{
    st.insert({xk+a,yk+b});
          st.insert({xk+a,yk-b});
          st.insert({xk+b,yk+a});
          st.insert({xk+b,yk-a});
          st.insert({xk-a,yk+b});
          st.insert({xk-a,yk-b});
          st.insert({xk-b,yk+a});
          st.insert({xk-b,yk-a});
          return ;
}
int main()
{  int t;
    cin>>t;
    while(t--)
    {

           long long a,b;
           cin>>a>>b;
           long long xk,yk;
           cin>>xk>>yk;
           long long xq,yq;
           cin>>xq>>yq;
           long long res=0;
          set<pair<int,int>>st1,st2;
          
          fun(st1,xk,yk,a,b);
          fun(st2,xq,yq,a,b);
          for(auto &p:st1)
          {
            if(st2.count(p))res++;
          }
          cout<<res<<endl;






    }
    return 0;
}