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
        int ans=0;
        forn(i,0,n)
        	cin>>a[i];
        forn(w,1,101){
        	map<int,int> m;
        	int count=0;
        	forn(i,0,n)
        		m[a[i]]++;
        	forn(i,0,n){
        		if(a[i]==w-a[i] && m[a[i]]>1)
        			count++, m[a[i]]--, m[w-a[i]]--;
        		
        		else if(a[i]!=w-a[i] && m[a[i]]>0 && m[w-a[i]]>0)
        			count++, m[a[i]]--, m[w-a[i]]--;
        		
        	}
        	if(ans<count)
        		debug(w,count);
        	ans=max(count,ans);
        }
        cout<<ans<<'\n';
    }
    return 0;
}