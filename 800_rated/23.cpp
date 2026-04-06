#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {

        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b)cout<<-1<<endl;
        else
        {
            int temp=d-b;
            a=a+temp;
            b=b+temp;
            if(a<c)cout<<-1<<endl;
            else
            {
                cout<<temp+(a-c)<<endl;
            }        }



    }
    return 0;
}