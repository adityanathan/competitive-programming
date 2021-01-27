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
    int n,k,t;
    cin>>t;

    while(t--){
        cin>>n>>k;
        vector<int> a(n);
        forn(i,0,n)
        	cin>>a[i];
        sort(a.begin(),a.end());
        int i=0, j=n-1, ans=0;
        while(i<=j){
        	if(a[j]>=k)
        		ans++, j--;
        	else if(i<j && a[i]+a[j]>=k)
        		ans++, i++, j--;
        	else
        		i++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}