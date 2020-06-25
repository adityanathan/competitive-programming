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
    int t;
    string s;
    cin>>t;

    while(t--){
        cin>>s;
        vector<int> a(2);
        forn(i,0,s.length())
        	a[s[i]-'0']++;
        cout<<(min(a[0],a[1])%2?"DA":"NET")<<'\n';
    }
    return 0;
}