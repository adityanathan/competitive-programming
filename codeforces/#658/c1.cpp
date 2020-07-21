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
    string a,b;
    cin>>t;

    while(t--){
        cin>>n>>a>>b;
        vector<int> v;
        forn(i,0,n)
        	if(a[i]!=b[i])
        		v.push_back(i+1);
        cout<<3*v.size()<<' ';
        forn(i,0,v.size()){
        	cout<<v[i]<<' '<<1<<' '<<v[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}