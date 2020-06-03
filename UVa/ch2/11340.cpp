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
    int n,k;
    ll cost;
    string s;
    char chr;

    cin>>n;
    while(n--){
        cin>>k;
        unordered_map<char,int> m;
        
        while(k--){
            cin>>chr>>cost;
            m[chr]=cost;
        }

        cost=0;
        cin>>k;
        k++;
        while(k--){
            getline(cin,s);

            forn(i,0,s.length())
                if(m.find(s[i])!=m.end())
                    cost+=m[s[i]];
        }
        cout<<cost/100<<'.'<<(cost/10)%10<<cost%10<<"$\n";
    }
    return 0;
}