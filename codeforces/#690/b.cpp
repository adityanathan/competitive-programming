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
    string s,s1="2020";
    cin>>t;

    while(t--){
        cin>>n>>s;
        int count=0;
        forn(i,0,4)
            if(s[i]==s1[i])
                count++;
            else
                break;
        forn(i,0,4)
            if(s[n-1-i]==s1[3-i])
                count++;
            else
                break;
        cout<<(count>=4?"YES\n":"NO\n");
    }
    return 0;
}