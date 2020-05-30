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
    int n,m,b,g,id;
    bool bb=true;
    {
        cin>>n>>m>>b;
        vector<int> boys(n,0),girls(m,0);
        forn(i,0,b){
        	cin>>id;
        	boys[id]=1;
        }
        cin>>g;
        forn(i,0,g){
        	cin>>id;
        	girls[id]=1;
        }
        forn(i,0,n*m)
        	if(boys[i%n]||girls[i%m])
        		boys[i%n]=girls[i%m]=1;
        forn(i,0,n)
        	if(boys[i]==0)
        		bb=false;
        forn(i,0,m)
        	if(girls[i]==0)
        		bb=false;
        cout<<(bb?"Yes":"No")<<'\n';
    }
    return 0;
}