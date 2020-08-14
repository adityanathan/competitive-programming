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
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<pair<int,int>> a(n);
        forn(i,0,n)
        	cin>>a[i].first, a[i].second=i;
        sort(a.begin(),a.end());
        if(a[0].first+a[1].first>a[n-1].first)
        	cout<<"-1\n";
        else{
        	int ans[3]={a[0].second,a[1].second,a[n-1].second};
        	sort(ans,ans+3);
        	cout<<ans[0]+1<<' '<<ans[1]+1<<' '<<ans[2]+1<<'\n';
        }
    }
    return 0;
}