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
    int n,k,t;
    cin>>t;

    while(t--){
        cin>>n>>k;
        forn(i,0,n)
        	if(i%3==0)
        		cout<<'a';
        	else if(i%3==1)
        		cout<<'b';
        	else
        		cout<<'c';
        cout<<'\n';
    }
    return 0;
}