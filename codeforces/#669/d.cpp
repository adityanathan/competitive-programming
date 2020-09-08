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
    int n,mins=0,maxs=0;

    cin>>n;
    vector<int> a(n);
    vector<pair<int,int>> b;
    forn(i,0,n)
    	cin>>a[i];
    b.push_back({a[0],1});
    forn(i,1,n){
    	if(a[i]==a[i-1])
    		b[b.size()-1].second++;
    	else
    		b.push_back({a[i],1});
    }
    n=b.size();
    if(n==1){
    	cout<<b[0].second-1;
    	return 0;
    }
    int tillmax=0, tillmin=0, tillmax2=0, tillmin2=0;
    while(tillmax<n-1 && a[tillmax]<=a[tillmax+1])
    	tillmax++;
    while(tillmin<n-1 && a[tillmin]>=a[tillmin+1])
    	tillmin++;

    while(tillmax2<n-1 && a[n-1-tillmax2]<=a[n-2-tillmax2])
    	tillmax2++;
    while(tillmin2<n-1 && a[n-1-tillmin2]>=a[n-2-tillmin2])
    	tillmin2++;


    if(b[0].first<b[1].first)
    	mins+=b[0].second;
    if(b[0].first>b[1].first)
    	maxs+=b[0].second;
    forn(i,1,n-1){
    	if(b[i].first<b[i-1].first&&b[i].first<b[i+1].first)
    		mins+=b[i].second;
    	if(b[i].first>b[i-1].first&&b[i].first>b[i+1].first)
    		maxs+=b[i].second;
    }
	if(b[n-2].first<b[n-1].first)
    	maxs+=b[n-1].second;
    if(b[n-2].first>b[n-1].first)
    	mins+=b[n-1].second;
    debug(tillmin,tillmax,tillmin2,tillmax2);
    cout<<min(mins+tillmin*(b[0].first>b[1].first) + tillmin2*(b[n-1].first>b[n-2].first),
    	maxs+tillmax*(b[0].first<b[1].first) + tillmax2*(b[n-1].first<b[n-2].first))-1<<'\n';
    
    return 0;
}