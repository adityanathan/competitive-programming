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
    int n,t,test,now,ans,start,end;
    cin>>test;
	t=test;

    while(t--){
        cin>>n;
        int a[n];
        forn(i,0,n)
        	cin>>a[i];
        ans=start=end=now=0;
        forn(i,0,n){
        	if(i>1 && a[i]-a[i-1]==a[i-1]-a[i-2])
        		now++;
        	else ans=max(now,ans), now=2, end=i, i=start, start=end;
        	// debug(i,a[i],now,ans);
        }
        ans=max(now,ans);
        cout<<"Case #"<<test-t<<": "<< ans<<'\n';
    }
    return 0;
}