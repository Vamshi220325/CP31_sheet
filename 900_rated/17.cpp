#include<bits/stdc++.h>
using namespace std;
void solve()
{
     long long n;
		cin >> n; 
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) 
			cin >> a[i];

		map<long long, long long> mp; 
		for (long long i = 0; i < n; i++) 
			mp[a[i]]++; 

		long long current_highest_freq = 0;
		for (auto i : mp) 
			current_highest_freq = max(current_highest_freq, i.second);

		long long operations = 0; 
		while (current_highest_freq < n)
		{
			operations++; 
			if (current_highest_freq * 2 <= n)
			{
				operations += current_highest_freq; 
				current_highest_freq *= 2; 
			}
			else
			{
				operations += n - current_highest_freq; 
				current_highest_freq = n; 
			}
		}

		cout << operations << endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}