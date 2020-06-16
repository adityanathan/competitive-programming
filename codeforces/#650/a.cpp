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
    cin>>t;
    string s;

    while(t--){
        cin>>s;
        cout<<s[0];
        forn(i,1,s.length())
        	if(i%2)
        		cout<<s[i];
        cout<<'\n';
    }
    return 0;
}