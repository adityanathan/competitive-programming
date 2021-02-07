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
        forn(i,0,s.length())
        	if(i%2){
        		if(s[i]!='z')
        			s[i]='z';
        		else
        			s[i]='y';
        	}
        	else{
        		if(s[i]!='a')
        			s[i]='a';
        		else
        			s[i]='b';
        	}
        cout<<s<<'\n';
    }
    return 0;
}