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
    int n,t,odd,a,x;
    cin>>t;

    while(t--){
        cin>>n>>x;
        odd=0;
        forn(i,0,n){
        	cin>>a;
        	if(a%2)
        		odd++;
        }
        if(odd && x<n && ((x%2)||(odd<n)))
        		cout<<"Yes\n";
    	else if(odd && odd%2 && x==n)
    		cout<<"Yes\n";
    	else
    		cout<<"No\n";
    }
    return 0;
}