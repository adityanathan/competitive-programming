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

double ans(vector<ll> a){
    int n=a.size();
    if(n==2)
        return a[0]+a[1];

    double ret=0;
    vector<ll> b;
    forn(i,0,n-1){
        b.clear();
        forn(j,0,n)
            if(j!=i)
                b.push_back(a[j]);
            else
                b.push_back(a[i]+a[i+1]), j++;
        
        ret+=1.0*(ans(b)+a[i]+a[i+1])/(n-1);
    }
    return ret;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t,test;
    cin>>test;
	t=test;

    while(t--){
        cin>>n;
        vector<ll> a(n);
        forn(i,0,n)
            cin>>a[i];
        cout<<"Case #"<<test-t<<": "<<setprecision(12)<< ans(a) <<'\n';
    }
    return 0;
}