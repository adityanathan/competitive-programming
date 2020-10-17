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
    string s;
    cin>>t;

    while(t--){
        cin>>s;
        n=s.length();
        int a[2]={0,0};
        forn(i,0,n){
        	a[s[i]=='B']++;
        	if(a[0] && s[i]=='B')
        		a[0]--, a[1]--;
        }
        cout<<a[0]+a[1]%2<<'\n';
    }
    return 0;
}