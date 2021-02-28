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
    int n,l,r,v,t;
    cin>>t;

    while(t--){
        cin>>n;
        map<int,map<int,int>> m;
        forn(i,0,n){
        	cin>>l>>r>>v;
        	m[v][l]++;
        	m[v][r+1]--;
        }
        bool b=true;
        for(auto mp:m){
        	int curr=0;
        	for(auto x:mp.second)
        		curr+=x.second,
        		b=b&&curr<3;
        }
        cout<<(b?"YES":"NO")<<'\n';
    }
    return 0;
}