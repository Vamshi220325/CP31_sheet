#include<bits/stdc++.h>
using namespace std;
bool isOk(int n)
{
    int count0=0,total=0;
    while(n>0)
    {
        int r=n%10;
        if(r==0)count0++;
        n/=10;
        total++;
    }
    return count0==total-1;
}

int main()
{   
    
    vector<int>temp;
for(int i=1;i<=999999;i++)
{
    if(isOk(i))
    {
      temp.push_back(i);
    }
}
    int t;
    cin>>t;
    while(t--)
    {

        long long n;
        cin>>n;
        long long count=0;
        for(int i=0;i<temp.size();i++)
        {
              if(temp[i]<=n)count++;
              else break;
        }
        cout<<count<<endl;


    }
    return 0;
}