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
    int n,x,t;
    cin>>t;

    while(t--){
        cin>>n>>x;
        vector<int> a(n);
        int ans=0;
        forn(i,0,n)
        	cin>>a[i];
        forn(i,0,n-1)
        	if(a[i]>a[i+1]){
        		int l=n;
        		forn(k,0,n)
        			if(a[k]>x){
        				l=k; 
        				break;
        			}
        		forn(j,l,i+1)
        			swap(x,a[j]),ans++;
        	}
        bool b=true;
        forn(i,0,n-1)
        	if(a[i]>a[i+1])
        		b=false;
        cout<<(b?ans:-1)<<'\n';
    }
    return 0;
}