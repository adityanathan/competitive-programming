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
    bool inc,dec;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n),b(1);
        cin>>a[0]>>a[1];
        b[0]=a[0];
        inc=a[1]>a[1-1];
    	dec=a[1]<a[1-1];
        forn(i,2,n){
        	cin>>a[i];
        	if(inc&&a[i]<a[i-1])
        		b.push_back(a[i-1]);
        	if(dec&&a[i]>a[i-1])
        		b.push_back(a[i-1]);
        	inc=a[i]>a[i-1];
        	dec=a[i]<a[i-1];
        }
        b.push_back(a[n-1]);
        cout<<b.size()<<'\n';
        forn(i,0,b.size())
        	cout<<b[i]<<' ';
        cout<<'\n';
    }
    return 0;
}