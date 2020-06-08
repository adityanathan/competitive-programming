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

ll gcd(ll a, ll b){
    return b==0?a:gcd(b,a%b);
}

bool equiprop(ll a, ll p, ll b, ll q){
    if((!p&&a)||(!q&&b)||(a&&!b&&q)||(!a&&b&&p))
        return false;
    if(gcd(a,p)&&gcd(b,q))
        return make_pair(a/gcd(a,p),p/gcd(a,p))==make_pair(b/gcd(b,q),q/gcd(b,q)) && !(a%p) && !(b%q);
    if(gcd(a,p))
        return !(a%p);
    if(gcd(b,q))
        return !(b%q);
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,c,p,q,r,t;
    cin>>t;

    while(cin>>p>>q>>r>>a>>b>>c){
        if(a==p && b==q && c==r)
            cout<<"0\n";
        else if((a==p)+(b==q)+(c==r)>1)
            cout<<"1\n";
        else if(a-p==b-q && a-p==c-r)
            cout<<"1\n";
        else if(equiprop(a,p,b,q) && equiprop(a,p,c,r))
            cout<<"1\n";
        else if(a-p==b-q || equiprop(a,p,b,q))
            cout<<1+(c!=r)<<"\n";
        else if(c-r==b-q || equiprop(c,r,b,q))
            cout<<1+(a!=p)<<"\n";
        else if(a-p==c-r || equiprop(a,p,c,r))
            cout<<1+(b!=q)<<"\n";
        else cout<<"3\n";
    }
    return 0;
}