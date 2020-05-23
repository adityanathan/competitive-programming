#include <bits/stdc++.h>
using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "]: [", _print(x)
#else
#define debug(x...) 141
#endif

#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(decltype(m)::iterator it = m.begin(); it!=m.end(); ++it)

typedef long long ll;

int n,p=1e9+7.5;

ll powr(ll a, ll n){
	if(n==0)
		return 1;
	ll x=powr(a,n/2);
	if(n%2)
		return ((x*x)%p*a)%p;
	return (x*x)%p;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll ans=0;
    cin>>n;
    vector<int> a(n);

    forn(i,0,n)
    	cin>>a[i];

    sort(a.begin(),a.end());

    int l=0,r=n-1;
    ll sum=powr(2,n-1)-1;	

    while(l<r){
    	ans+=(a[r]-a[l])*sum%p;
    	sum=(sum+2*p-powr(2,l++)-powr(2,r---1))%p;
    }

    cout<<ans%p;
    return 0;
}

