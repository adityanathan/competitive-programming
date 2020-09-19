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
    int t,n,x,a;
    cin>>t;
    while(t--){
        cin>>n>>x;
        ll sum=0,ans=0;
        forn(i,0,n)
        	cin>>a, sum+=(x==a?0:a), ans+=x!=a;
        if(!ans)
        	cout<<"0\n";
        else if(ans<n || sum==ans*x)
        	cout<<"1\n";
       	else
       		cout<<"2\n";
    }
    return 0;
}