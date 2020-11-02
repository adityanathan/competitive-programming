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
    string s;
    {
        cin>>s;
        n=s.length();
        cout<<"3\n";
        cout<<"L 2\nR 2\n";
        cout<<"R "<<2*n-1<<'\n';
    }
    return 0;
}