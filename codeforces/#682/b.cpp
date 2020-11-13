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
        vector<int> a(n);
        bool b=false;
        forn(i,0,n)
        	cin>>a[i];
        set<map<int,int>> s;
        forn(i,0,n){
        	map<int,int> m;
        	forn(j,i,n){
        		int x=a[j];
        		while(m[x])
        			if(m[x]==1)
        				m[x]=0,m[x+1]++, x++;
        			else
        				m[x]=1,m[x+1]++, x++;
        		if(s.count(m))
        			b=true;
        		s.insert(m);
        		if(b)
        			break;
        	}
        	if(b)
        		break;
        }
        cout<<(b?"YES":"NO")<<'\n';
    }
    return 0;
}