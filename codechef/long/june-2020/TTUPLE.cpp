#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a,b,c,p,q,r,t;
ll gcd(ll a, ll b) {return b==0?a:gcd(b,a%b);}

bool equiprop(ll a, ll p, ll b, ll q){
    if((!p&&a) || (!q&&b) || (a&&!b&&q) || (!a&&b&&p))
        return false;
    if(gcd(a,p) && gcd(b,q))
        return !(a%p) && !(b%q) && a/gcd(a,p)==b/gcd(b,q) && p/gcd(a,p)==q/gcd(b,q);
    if(p) return !(a%p);
    if(q) return !(b%q);
    return true;
}

int ans(ll p, ll q, ll r){
    if((a==p)+(b==q)+(c==r)>1)
        return 3-(a==p)-(b==q)-(c==r);
    if((a-p==b-q && a-p==c-r) || (equiprop(a, p, b, q) && equiprop(a, p, c, r) && equiprop(b, q, c, r)))
        return 1;
    if(c==r)
        return 1 + (a-p!=b-q && !equiprop(a, p, b, q));
    if(a==p)
        return 1 + (c-r!=b-q && !equiprop(c, r, b, q));
    if(b==q)
        return 1 + (a-p!=c-r && !equiprop(a, p, c, r));
    if(a==p || b==q || c==r)
        return 2;

    int remain=3;   // NO MORE SPECIAL TREATMENT  #recursion
    if(equiprop(a-b, p-q, b-c, q-r)) // triple + triple
        return 2;
    remain=min(remain, ans(p+c-r, q+c-r, r+c-r)); // triple + double 
    remain=min(remain, ans(p+b-q, q+b-q, r+b-q));
    remain=min(remain, ans(p+a-p, q+a-p, r+a-p));
    if(r && !(c%r)) remain=min(remain, ans(p*c/r, q*c/r, r*c/r));
    if(q && !(b%q)) remain=min(remain, ans(p*b/q, q*b/q, r*b/q));
    if(p && !(a%p)) remain=min(remain, ans(p*a/p, q*a/p, r*a/p));
    if(equiprop(a+r-c,p,b+r-c,q)+equiprop(a+q-b,p,c+q-b,r)+equiprop(b+p-a,q,c+p-a,r))
        return 2;                       // double + triple
    remain=min(remain, ans(p, q+c-r, r+c-r)); // double + double 
    remain=min(remain, ans(p+c-r, q, r+c-r));
    remain=min(remain, ans(p, q+b-q, r+b-q));
    remain=min(remain, ans(p+b-q, q+b-q, r));
    remain=min(remain, ans(p+a-p, q, r+a-p));
    remain=min(remain, ans(p+a-p, q+a-p, r));
    if(r && !(c%r)) remain=min(remain, ans(p, q*c/r, r*c/r));
    if(r && !(c%r)) remain=min(remain, ans(p*c/r, q, r*c/r));
    if(q && !(b%q)) remain=min(remain, ans(p, q*b/q, r*b/q));
    if(q && !(b%q)) remain=min(remain, ans(p*b/q, q*b/q, r));
    if(p && !(a%p)) remain=min(remain, ans(p*a/p, q, r*a/p));
    if(p && !(a%p)) remain=min(remain, ans(p*a/p, q*a/p, r));
    return 1 + remain;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(cin>>p>>q>>r>>a>>b>>c)
        cout<<ans(p, q, r)<<'\n';
    return 0;
}