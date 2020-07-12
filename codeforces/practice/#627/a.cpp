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
    int n,t,a;
    cin>>t;

    while(t--){
        cin>>n;
        map<int,int> m;
        forn(i,0,n){
        	cin>>a;
        	m[a%2]++;
        }
        if(m[0] && m[1])
        	cout<<"NO\n";
        else
        	cout<<"YES"<<'\n';
    }
    return 0;
}