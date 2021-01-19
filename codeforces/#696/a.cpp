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
    string b;
    cin>>t;

    while(t--){
        cin>>n>>b;
        string a(n,'0');
        a[0]='1';
        forn(i,1,n)
        	a[i]=(b[i-1]-'0'+a[i-1]-'0'==1+b[i]-'0'?'0':'1');

        cout<<a<<'\n';
    }
    return 0;
}