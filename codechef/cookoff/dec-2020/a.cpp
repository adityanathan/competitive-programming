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
    string s;
    cin>>t;

    while(t--){
        cin>>s;
        n=s.length();
        if(n%2){
        	cout<<"-1\n";
        	continue;
        }
        int count=0;
        forn(i,0,n)
        	count+=s[i]=='0';

        cout<<(count==n||!count?-1:n/2-min(count,n-count))<<'\n';
    }
    return 0;
}