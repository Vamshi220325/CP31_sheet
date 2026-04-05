#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
      int n,k,x;
      cin>>n>>k>>x;
      


      if(x!=1)
      { cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=1;i<=n;i++)
        {cout<<1<<" ";}
        cout<<endl;
      }
      
      else if(x==1)
      {  if(x==1&&(k==1||n==1))
        {
          cout<<"NO"<<endl;
        }
         else if(k==2&&(n&1))cout<<"NO"<<endl;
         
      else 
      {
        cout<<"YES"<<endl;
        int temp=n%2==0?n/2:n/2-1;
        int count=n%2==0?temp:temp+1;
        cout<<count<<endl;
        for(int i=1;i<=temp;i++)
          {
            cout<<2<<" ";
          }
          if(n%2==1)cout<<3<<endl;

      }



    }
  }
    return 0;
  
}