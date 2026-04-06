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
         bool flag=true;
         for(int i=1;i<n;i++)
         {
            if(arr[i-1]!=arr[i])
            {
                flag=false;break;
            }
         }
         if(flag)cout<<"NO"<<endl;
         else
         {  cout<<"YES"<<endl;
            sort(arr.begin(),arr.end());
            int low=0,high=n-1;
            while(low<=high)
            {
                cout<<arr[low]<<" ";
                low++;
                if(low<=high)
                {
                    cout<<arr[high]<<" ";
                    high--;
                }
            }
            cout<<endl;
         }


    }
    return 0;
}