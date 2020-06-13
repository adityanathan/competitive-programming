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
    int n,t,x,sum,st,end;
    cin>>t;

    while(t--){
        cin>>n>>x;
        vector<int> a(n);
        sum=st=end=0;
        forn(i,0,n){
        	cin>>a[i];
        	if(a[i]%x==0 && st==i)
        		st++;
        	sum+=a[i];
        }
        forn(i,0,n)
        	if(a[n-1-i]%x==0)
        		end++;
        	else
        		break;
        debug(st,end);
        cout<<(sum%x?n:n-1-min(st,end))<<'\n';

    }
    return 0;
}