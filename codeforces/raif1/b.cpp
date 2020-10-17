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
        cin>>n>>s;
        map<char,int> m;
        int cnt=0;
        forn(i,0,n)
        	m[s[i]]++;
        if(m['<']==0 || m['>']==0){
        	cout<<n<<'\n';
        	continue;
        }
        forn(i,0,n)
        	if(s[(i+1)%n]=='-'||s[i]=='-')
        		cnt++;
        cout<<cnt<<'\n';
    }
    return 0;
}