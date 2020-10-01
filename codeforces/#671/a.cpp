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
        bool f;
        if(n%2){
        	f=true;
        	forn(i,0,n){
        		if(s[i]%2)
        			f=false;
        		i++;
        	}
        }
        else{
        	f=false;
        	forn(i,0,n){
        		i++;
        		if(s[i]%2==0)
        			f=true;
        	}
        }
        
        cout<<1+f<<'\n';
    }
    return 0;
}