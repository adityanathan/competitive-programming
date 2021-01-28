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
    int q,d,a,t;
    cin>>t;

    while(t--){
        cin>>q>>d;
        while(q--){
        	cin>>a;
        	if(a>=d*10){
        		cout<<"YES\n";
        		continue;
        	}
        	int i=d;
        	while(a%10!=i%10&&a>=i)
        		i+=d;
        	cout<<(a>=i?"YES\n":"NO\n");
        }
    }
    return 0;
}