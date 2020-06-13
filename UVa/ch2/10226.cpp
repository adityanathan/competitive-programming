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
    int t;
    cin>>t;
    getline(cin,s);
    getline(cin,s);

    while(t--){
        float n=0;
        map<string,float> m;

        while(getline(cin,s) && s!=""){
            m[s]++;
            n++;
        }
        forit(it,m)
            cout<<fixed<<setprecision(4)<<it->first<<' '<<100*it->second/n<<'\n';
        if(t)
            cout<<'\n';
    }
    
    return 0;
}