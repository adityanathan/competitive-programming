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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,mid,l=0,r=1e15;
    cin>>n;
    vector<int> a(n);
    forn(i,0,n)
    	cin>>a[i];
    sort(a.begin(),a.end());
    int t=500;
    while(t--){
    	mid=(l+r)/2;
    	debug(l,r,mid);
    	int i=0, j=0;
    	while(i<n && a[i]<=a[j]+mid)
    		i++;
    	j=i;
    	while(i<n && a[i]<=a[j]+mid)
    		i++;
    	j=i;
    	while(i<n && a[i]<=a[j]+mid)
    		i++;
    	if(i==n)
    		r=mid;
    	else
    		l=mid;
    }
    mid=(l+r)/2;
    cout<<0.5*mid<<'\n';
    int i=0, j=0;
    cout<<a[0]+0.5*mid<<' ';
	while(i<n && a[i]<=a[j]+mid)
		i++;
	if(i==n){
		cout<<a[0]+0.5*mid<<' ';cout<<a[0]+0.5*mid<<' ';return 0;
	}
	j=i;
	cout<<a[j]+0.5*mid<<' ';
	while(i<n && a[i]<=a[j]+mid)
		i++;
	if(i==n)
		cout<<a[j]+0.5*mid<<' ';
	else
		cout<<a[i]+0.5*mid<<' ';
    
    return 0;
}