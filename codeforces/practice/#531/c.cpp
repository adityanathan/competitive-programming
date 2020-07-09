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
    int n,x,y,ans=0,save=0;
    {
        cin>>n>>x>>y;
        if(x>y){
        	cout<<n;
        	return 0;
        }
        vector<int> a(n);
        forn(i,0,n)
        	cin>>a[i];
        sort(a.begin(),a.end());
        forn(i,0,n){
        	if(a[i]>x)
        		break;
        	if(a[i]+y>x)
        		save++;
        	ans++;
        }
        cout<<ans-save/2<<'\n';
    }
    return 0;
}