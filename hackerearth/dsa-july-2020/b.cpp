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
    long long ans=0,n,a=0,c=0,left,right;
    string s;
    cin>>n>>s;
    map<int,int> m;

    forn(i,0,n){
        c+=s[i]=='c';
        a+=s[i]=='a';
        if(m[c-a])
            left=m[c-a];
        else left=0;

        ans+=right-left;
        m[a-c]=i+1;
        debug(i,ans);
    }
    cout<<ans<<'\n';
    
}