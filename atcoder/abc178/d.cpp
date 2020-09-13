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

long long p = 1e9+7.5;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;

    cin>>n;
    vector<int> s(n+4);
    s[0]=s[1]=s[2]=0, s[3]=1;
    forn(i,4,n+1){
    	s[i]++;
    	forn(j,0,i-2)
    		s[i]+=s[j], s[i]%=p;
    }
    cout<<s[n]<<'\n';
    
    return 0;
}