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

parent
void make_set(int v){
    parent[v] = v;
    size[v] = 1;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h,w;

    cin>>h>>w;
    s.assign(h,"");
    forn(i,0,h)
    	cin>>s[i];

    ans.assign(h,vector<ll>(w,1));
    cout<<dp(h-1,w-1)<<'\n';
    
    return 0;
}