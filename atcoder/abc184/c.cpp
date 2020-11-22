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
    ll a,b,c,d;

    cin>>a>>b>>c>>d;
    if(abs(a-c)+abs(b-d)<=3||a+b==c+d||a-b==c-d){
    	cout<<(a!=c||b!=d);
    	return 0;
    }
    if(abs(a+b-c-d)<=3 || abs(a-b-c+d)<=3 || (a+b+c+d)%2==0){
    	cout<<2;
    	return 0;
    }
    cout<<3;
    return 0;
}