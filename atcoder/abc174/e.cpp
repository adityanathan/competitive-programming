#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N = 2e5 + 5;

int n, k;
int a[N];

bool check(int x)
{
	int reqd = 0;
	for(int i = 1; i + 1 <= n; i++)
	{
		int diff = a[i + 1] - a[i];
		reqd += (diff - 1) / x;
		if(reqd > k)
			return 0;
	}
	return 1;
}

int binsearch(int lo, int hi)
{
	while(lo < hi)
	{
		int mid = (lo + hi) / 2;
		if(check(mid))
			hi = mid;
		else
			lo = mid + 1;
	}
	return lo;
}

int32_t main()
{
	IOS;
	{
		cin >> n >> k;
		a[1]=0;
		for(int i=1; i<=n; ++i)
			cin>>a[i+1];

		for(int i=1;i<=n;i++)
			a[i+1]+=a[i];
		n++;
		int ans = binsearch(1, 1e18);
		cout << ans << endl;
 	}	
	return 0;
}