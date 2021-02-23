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
    int a,b,k,n;

    cin>>a>>b>>k;
    n=a+b;
    if(k&&k>=a+b-1||((a==0||b==1)&&k)){
    	cout<<"No";
    	return 0;
    }
    cout<<"Yes\n";
    vector<int> ans(n);
    forn(i,0,n)
    	ans[i]=i<b;
    if(k==0){
    	for(auto x:ans)
    		cout<<x;
    	cout<<'\n';
    	for(auto x:ans)
    		cout<<x;
    	return 0;
    }
    debug(ans);
    if(k<a)
    	ans[n-1-k]=1, ans[n-1-a]=0;
    debug(ans);
	bool bb=false;
    forn(i,0,n)
    	if(ans[i]||bb)
			cout<<ans[i], bb=true;
	cout<<'\n';
	bb=false;
	forn(i,0,n)
		if((i!=n-1&&(i!=n-1-k)?ans[i]:!ans[i])||bb)
			cout<<(i!=n-1&&(i!=n-1-k)?ans[i]:!ans[i]), bb=true;
    return 0;
}