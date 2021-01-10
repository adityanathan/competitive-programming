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
        vector<int> a(n),b(n);
        forn(i,0,n)
        	cin>>a[i];
        int tot=0, best=0;
        forn(i,1,n-1)
        	if(a[i]>a[i-1] && a[i]>a[i+1]||a[i]<a[i-1]&&a[i]<a[i+1])
        		tot++, b[i]=1, best=1;
        forn(i,1,n-1){
        	if(b[i-1]&&b[i]||b[i]&&b[i+1])
        		best=max(best,2);
        	if(b[i-1]&&b[i]&&b[i+1])
        		best=max(best,3);
        }
        cout<<tot-best<<'\n';
    }
    return 0;
}