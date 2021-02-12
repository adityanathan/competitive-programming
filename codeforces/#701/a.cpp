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
    int a,b,x,t;
    cin>>t;

    while(t--){
        cin>>a>>b;
        vector<int> ans(100);
        int fin=1e9;
        forn(i,0,100){
        	x=a;
        	if(b!=1)
	        	while(x)
	        		x/=b,ans[i]++;
	        else
	        	ans[i]=1e9;
        	b++;
        }
        
        forn(i,0,100)
        	fin=min(fin,ans[i]+i);
        cout<<fin<<'\n';
    }
    return 0;
}