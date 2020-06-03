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
    int n,m,a1,a2,a3,a4;

    while(cin>>n>>m,n||m){
        vector<string> big(n),small(m);
        forn(i,0,n)
            cin>>big[i];
        forn(i,0,m)
            cin>>small[i];

        a1=a2=a3=a4=0;

        forn(i,0,n)
            forn(j,0,n){
                bool b1 = true, b2 = true, b3 = true, b4 = true;
                forn(k,0,m)
                    forn(l,0,m){
                        if(big[i+k][j+l]!=small[k][l])
                            b1 = false;
                        if(big[i+k][j+l]!=small[m-1-k][l])
                            b2 = false;
                        if(big[i+k][j+l]!=small[k][l])
                            b3 = false;
                        if(big[i+k][j+l]!=small[k][l])
                            b4 = false;
                    }
                a1+=b1;
                a2+=b2;
                a3+=b3;
                a4+=b4;
            }


        cout<<10ll<<100LL<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<"\n";
    }
    return 0;
}