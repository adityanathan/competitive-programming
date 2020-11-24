#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.rbegin(); it!=m.rend(); ++it)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,t;
    cin>>t;

    while(t--){
        cin>>n;
        bool b=false;
        map<int,vector<int>> m;

        set<int> seen;
        forn(i,0,n)
        	cin>>a, m[a].push_back(i);
        int start=n, end=-1;
        forit(it,m){
        	vector<int> a=it->second;
        	n=a.size();
        	if(start>a[0])
        		start=a[0];
			if(end<a[n-1])
				end=a[n-1];
        	forn(i,0,n)
        		if(start<a[i] && a[i]<end)
        			seen.insert(a[i]);
        	if(seen.size()==end-start+1){
        		b=true;
        		break;
        	}
        	debug(it->first,start,end);
        }
        cout<<(b?"YES":"NO")<<'\n';
        if(b)
        	cout<<start+1<<' '<<end-start+1<<' '<<n-end-1<<'\n';
    }
    return 0;
}