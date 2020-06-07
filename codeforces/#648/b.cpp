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
        bool nots=false;
        vector<int> a(n),b(n);
        forn(i,0,n){
        	cin>>a[i];
        	if(i>0 && a[i]<a[i-1]){
        		// debug(a[i-1],a[i]);
        		nots=true;
        	}
        	// debug(a);
        }
        set<int> m;
        forn(i,0,n){
        	cin>>b[i];
        	m.insert(b[i]);
        }
        cout<<(m.size()==1 && nots?"No":"Yes")<<'\n';
    }
    return 0;
}