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
    int t;
    string s;
    cin>>t;

    while(t--){
        cin>>s;
        bool b=true;
        if(s[0]==')'||s[s.length()-1]=='(')
        	b=false;

        cout<<(b && s.length()%2==0?"YES":"NO")<<'\n';
    }
    return 0;
}