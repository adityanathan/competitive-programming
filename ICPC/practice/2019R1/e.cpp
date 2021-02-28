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
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<pair<int,int>> a(n);
        vector<int> v;
        set<int> s;
        forn(i,0,n)
        	cin>>a[i].first, a[i].second=i+1;
        sort(a.rbegin(),a.rend());
        ll ans=0, next=0, id=0, happiness=0;
        while(true){
        	next=ans, id=-1;
        	forn(i,0,n)
        		if(next<(ans|a[i].first))
        			next=ans|a[i].first, id=a[i].second;
        	if(next==ans)
        		break;
        	ans=next;
        	v.push_back(id);
        	s.insert(id);
        	happiness+=next;
        }
        cout<<happiness+1ll*(n-(int)v.size())*next<<'\n';
        reverse(v.begin(),v.end());
       	forn(i,0,n)
       		if(!s.count(i+1))
       			cout<<i+1<<' ';
        for(auto x:v)
        	cout<<x<<' ';
        cout<<'\n';
    }
    return 0;
}