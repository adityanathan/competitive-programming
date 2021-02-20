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
    string s;
    bool b=true;
    cin>>s;

    forn(i,0,s.size())
    	if(i%2==0)
    		b=b&&s[i]<='z'&&s[i]>='a';
    	else
    		b=b&&s[i]<='Z'&&s[i]>='A';
    cout<<(b?"Yes":"No")<<'\n';
    
    return 0;
}