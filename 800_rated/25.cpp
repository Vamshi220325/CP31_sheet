#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      string s;
      cin>>s;
      int low=0,high=n-1;
      while(low<high)
      {
        if((s[low]=='0'&&s[high]=='1')||(s[low]=='1'&&s[high]=='0'))
        {
            low++;high--;
        }
        else break;
      }
      cout<<high-low+1<<endl;



    }
    return 0;
}