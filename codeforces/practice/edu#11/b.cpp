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
    int n,m;
    {
        cin>>n>>m;
        forn(i,1,n+1){
        	if(2*i-1+2*n<=m)
        		cout<<2*i-1+2*n<<' ';
        	if(2*i-1<=m)
        		cout<<2*i-1<<' ';
        	if(2*i+2*n<=m)
        		cout<<2*i+2*n<<' ';
        	if(2*i<=m)
        		cout<<2*i<<' ';
        }
    }
    return 0;
}