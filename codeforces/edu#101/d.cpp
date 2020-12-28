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

vector<pair<int,int>> ans;
void f(int n){
	if(n<=2)
		return;
	int x=(int)(sqrt(n)+1);
	forn(i,x+1,n)
		ans.push_back({i,n});
	ans.push_back({n,x});
	ans.push_back({n,x});
	f(x);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>t;

    while(t--){
    	ans.clear();
        cin>>n;
        f(n);
        cout<<ans.size()<<'\n';
        for(auto [a,b]:ans)
        	cout<<a<<' '<<b<<'\n';
    }
    return 0;
}