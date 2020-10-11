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

pair<pair<int,int>,int> f(int n){
	if(n==3)
		return {{1,0},0};
	if(n==5)
		return {{0,1},0};
	if(n==7)
		return {{0,0},1};
	if(n<6)
		return {{0,0},0};
	pair<pair<int,int>,int> pi,ze={{0,0},0};
	pi=f(n-3);
	if(pi!=ze)
		return {{pi.first.first+1,pi.first.second},pi.second};
	pi=f(n-5);
	if(pi!=ze)
		return {{pi.first.first,pi.first.second+1},pi.second};
	pi=f(n-7);
	if(pi!=ze)
		return {{pi.first.first,pi.first.second},pi.second+1};
	return ze;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>t;
    pair<pair<int,int>,int> pi,ze={{0,0},0};
    while(t--){
        cin>>n;
        pi=f(n);
        if(pi==ze)
        	cout<<"-1\n";
        else
       		cout<<pi.first.first<<' '<<pi.first.second<<' '<<pi.second<<'\n';
    }
    return 0;
}