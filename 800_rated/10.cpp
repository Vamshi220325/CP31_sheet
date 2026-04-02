#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
         
        long long res=0;
         for(int i=0;i<10;i++)
         {
            for(int j=0;j<10;j++)
            {  char x;
                cin>>x;
                if(x=='X')
                {
                    if(i>=4&&i<=5&&j>=4&&j<=5)res+=5;
                    else if(i>=3&&j>=3&&i<=6&&j<=6)res+=4;
                    else if(i>=2&&j>=2&&i<=7&&j<=7)res+=3;
                    else if(i>=1&&j>=1&&i<=8&&j<=8)res+=2;
                    else res+=1;

                }
            }
         }
         cout<<res<<endl;




    }
    return 0;
}