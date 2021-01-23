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
    vector<ll> a(n+1);
    vector<string> s(n);
    a[0]=1;
    forn(i,0,n){
    	cin>>s[i];
    	a[i+1]=s[i]=="AND"?a[i]:a[i]+(1<<i+1);
    }


    cout<<a[n]<<'\n';
    
    return 0;
}