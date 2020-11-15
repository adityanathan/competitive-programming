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
    ll n,w,t;
    cin>>t;

    while(t--){
        cin>>n>>w;
        vector<pair<int,int>> a(n);
        forn(i,0,n){
        	cin>>a[i].first, a[i].second=i+1;
        }
        sort(a.begin(),a.end());
        ll i=0, sum=0;
        while(sum<(w+1)/2 && a[i].first<(w+1)/2 && i<n)
        	sum+=a[i++].first;
        if(sum>=(w+1)/2 && sum<=w){
        	cout<<i<<'\n';
        	forn(j,0,i)
        		cout<<a[j].second<<' ';
    		cout<<'\n';
    		continue;
        }
        if(i<n && a[i].first>=(w+1)/2 && a[i].first<=w){
        	cout<<1<<'\n';
        	cout<<a[i].second<<'\n';
    		continue;
        }

        cout<<-1<<'\n';
        
    }
    return 0;
}