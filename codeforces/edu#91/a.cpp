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
    bool b;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n);
        forn(i,0,n)
        	cin>>a[i];
        b=true;
        forn(i,0,n-2){
        	if(a[i]<a[i+1] && a[i+1]>a[i+2] && b){
        		cout<<"YES\n"<<i+1<<' '<<i+2<<' '<<i+3<<'\n',b=false;
        	}
        }
        if(b)
        	cout<<"NO"<<'\n';
    }
    return 0;
}