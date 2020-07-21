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
    string a,b;
    cin>>t;

    while(t--){
        cin>>n>>a>>b;
        vector<int> v,id;
        if(n%2){
        	forn(i,0,n/2+1)
        		id.push_back(n-2*i);
        	forn(i,1,n/2+1)
        		id.push_back(2*i);
        }
        else{
        	forn(i,0,n/2)
        		id.push_back(n-2*i);
        	forn(i,1,n/2+1)
        		id.push_back(2*i-1);
        }
        set<int> m;
        forn(i,0,n)
        	if(i<(n+1)/2 && a[id[i]-1]==b[i])
        		m.insert(id[i]);
        	else if(i>=(n+1)/2 && a[id[i]-1]!=b[i])
        		m.insert(id[i]);
        cout<<n+m.size()<<' ';
        forn(i,1,n+1)
        	cout<<i<<' '<<(m.count(i)?"1 ":"");
        cout<<'\n';
    }
    return 0;
}