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

int count_digits(ll n) 
{ 	int digits=0;
    for (digits = 0; n > 0; n >>= 1)
        digits++;
    return digits;
}

ll pwr(ll a, int n){
	if(n==0)
		return 1;
	ll x=pow(a,n/2);
	if(n%2)
		return x*x*a;
	return x*x;
}

struct Interval{
    ll denom;
    ll num;
    int id; 
}; 

bool compareInterval(Interval i1, Interval i2){ 
    return i1.num*i2.denom < i2.num*i1.denom; 
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<ll> a(n);
        vector<Interval> b(n);
        forn(i,0,n)
        	cin>>a[i],b[i]={a[i],pwr(2,count_digits(a[i]))-1,i};
        sort(b.begin(),b.end(),compareInterval);
        ll x=a[b[0].id], y=a[b[n-1].id];
        cout<<(pwr(2,count_digits(y))-1)*x-(pwr(2,count_digits(x))-1)*y<<'\n';
    }
    return 0;
}