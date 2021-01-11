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
    int n;

    cin>>n;
    vector<int> a(1<<n), b(1<<n);
    forn(i,0,1<<n)
    	cin>>a[i], b[i]=i;
    while(b.size()>2){
    	vector<int> c;
    	forn(i,0,1<<n){
    		if(a[b[i]]>a[b[i+1]])
    			c.push_back(b[i]);
    		else
    			c.push_back(b[i+1]);
    		i++;
    	}
    	b=c;
    	n--;
    }
    cout<<(a[b[0]]<a[b[1]]?b[0]+1:b[1]+1)<<'\n';
    
    return 0;
}