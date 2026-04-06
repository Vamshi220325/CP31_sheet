#include<bits/stdc++.h>
using namespace std;


int main()
{   
    int t;
    cin>>t;
    while(t--)
    {

        long long n;
        cin>>n;
        string s=to_string(n);
        int n2=s.size();
        cout<<(n2-1)*9+s[0]-'0'<<endl;


    }
    return 0;
}