#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

ll gcd(ll a, ll b){
	return b==0?a:gcd(b,a%b);
}

vector<int> allFact(int n) 
{ 
	vector<int> v;
	for (int i=1; i<=sqrt(n); i++) 
	{ 
		if (n%i == 0) 
		{ 
			if (n/i == i) 
				v.push_back(i); 
			else v.push_back(i),v.push_back(n/i); 
		}
	} 
	return v;
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,t,ans;
    pair<int,int> p;
    vector<int> a;
    cin>>t;

    while(t--){
        cin>>n;
        a=allFact(n);
        sort(a.begin(),a.end());
        ans=n-1;
        p={1,n-1};
        for(auto x: a)
        	if(x==0 || x==n)
        		continue;
        	else if(x/gcd(x,n-x)*(n-x)<ans)
        			ans=x/gcd(x,n-x)*(n-x), p={x,n-x};
        cout<<p.first<<' '<<p.second<<'\n';
    }
    return 0;
}