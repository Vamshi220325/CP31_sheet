#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {

         int n;
         cin>>n;
         vector<int>arr(n);
         for(int i=0;i<n;i++)
         {
            cin>>arr[i];
         }
          int count2=0;
          for(int i=0;i<n;i++)
          {
            if(arr[i]==2)count2++;
          }
          if(count2&1)cout<<-1<<endl;
          else
          {
            if(count2==0)cout<<1<<endl;
            else 
            {
              int tempCount=count2/2;
              int idx=-1;
              for(int i=0;i<n;i++)
              {
                if(arr[i]==2)
                {
                  tempCount--;
                }
                if(tempCount==0)
                {idx=i+1;break;}
              }
              cout<<idx<<endl;
            }
          }

        


    }
    return 0;
}