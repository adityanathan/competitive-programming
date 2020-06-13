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
    int n,q,type,pos,val,l,r;

    cin>>n>>q;
    vector<int> a(n);
    forn(i,0,n)
    	cin>>a[i];
    forn(i,0,q){
        cin>>type;
        if(!type){
            cin>>pos>>val;
            a[pos-1]=val;
            continue;
        }
        cin>>l>>r;
        set<int> s;
        forn(i,l-1,r)
            s.insert(a[i]);
        debug(a,s);
        cout<<(s.size()!=r-l+1?"No\n":"Yes\n");
    }
    return 0;
}