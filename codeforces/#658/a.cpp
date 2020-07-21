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
    int n,mm,t,ans,aa;
    cin>>t;

    while(t--){
        cin>>n>>mm;
        ans=0;
        map<int,int> m;
        forn(i,0,n)
        	cin>>aa,m[aa]=1;
        forn(i,0,mm){
        	cin>>aa;
        	if(m.find(aa)!=m.end())
        		ans=aa;
        }
        cout<<(ans?"YES\n1 "+to_string(ans):"NO")<<'\n';
    }
    return 0;
}