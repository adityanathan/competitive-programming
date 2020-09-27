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
    int n,t,test,k;
    cin>>test;
	t=test;

    while(t--){
        cin>>n>>k;
        vector<pair<int,int>> se(n);
        forn(i,0,n)
            cin>>se[i].first>>se[i].second;
        sort(se.begin(),se.end());
        int cnt=0, end=0;
        forn(i,0,n)
            while(se[i].second>end)
                cnt++, end=k+max(se[i].first,end);
        cout<<"Case #"<<test-t<<": "<< cnt <<'\n';
    }
    return 0;
}