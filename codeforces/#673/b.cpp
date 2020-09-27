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
    int n,t,T;
    cin>>t;

    while(t--){
        cin>>n>>T;
        vector<int> a(n),b(n);
        map<int,int> m1,m2;
        forn(i,0,n){
        	cin>>a[i];
        	if(m1[T-a[i]]>m2[T-a[i]])
        		m2[a[i]]++, b[i]=1;
        	else
        		m1[a[i]]++;
        }
        for(auto x:b)
        	cout<<x<<' ';
        cout<<'\n';
    }
    return 0;
}