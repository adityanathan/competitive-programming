#include <bits/stdc++.h> // running median, online algorithm, two heaps, min max binary search trees
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;
   
multiset<int> l,r;

void add(int ai){
	if(ai<=*l.rbegin()){
		if(l.size()==r.size())
			l.insert(ai);
		else l.insert(ai), r.insert(*l.rbegin()), l.erase(l.find(*l.rbegin()));
	}
	else{
		if(l.size()==r.size()+1)
			r.insert(ai);
		else r.insert(ai), l.insert(*r.begin()), r.erase(r.begin());
	}
}

void remove(int ai){
	if(ai<=*l.rbegin()){
		if(l.size()==r.size()+1)
			l.erase(l.find(ai));
		else l.erase(l.find(ai)), l.insert(*r.begin()), r.erase(r.begin());
	}
	else{
		if(l.size()==r.size())
			r.erase(r.find(ai));
		else r.erase(r.find(ai)), r.insert(*l.rbegin()), l.erase(l.find(*l.rbegin()));
	}
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    int ans=0;
    forn(i,0,n)
    	cin>>a[i];

    forn(kk,k,min(k+5,n)){
    	l.clear(), r.clear();
	    l.insert(a[0]);
	    forn(i,1,kk)
	    	add(a[i]);

	    forn(i,kk,n){
	    	ans=max(ans,*l.rbegin());
	    	add(a[i]);
	    	remove(a[i-kk]);
	    }
	    ans=max(ans,*l.rbegin());
	}

    cout<<ans<<'\n';
    
    return 0;
}