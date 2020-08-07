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
    int n,t,aa,maxi,count;
    cin>>t;

    while(t--){
        cin>>n;
        map<int,int> m;
        maxi=count=0;
        forn(i,0,n)
        	cin>>aa, m[aa]++;
        forit(it,m)
        	maxi=max(maxi,it->second);
        forit(it,m)
        	count+=it->second==maxi;
        cout<<(n-count*maxi)/(maxi-1)+count-1<<'\n';
    }
    return 0;
}