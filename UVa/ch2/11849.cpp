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
    int n,m,a;
    while(cin>>n>>m){
        if((n||m)==0)
            break;
        unordered_set<int> s1,s2;
        forn(i,0,n){
            cin>>a;
            s1.insert(a);
        }
        forn(i,0,m){
            cin>>a;
            s2.insert(a);
        }
        a=0;
        forit(it,s1)
            if(s2.find(*it)!=s2.end())
                a++;
        cout<<a<<"\n";
    }
    return 0;
}