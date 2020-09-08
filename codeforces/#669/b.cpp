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

int gcd(int a, int b){
	return b?gcd(b,a%b):a;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        int maxi=0;
        vector<int> a(n);
        forn(i,0,n){
        	cin>>a[i];
        	maxi=a[maxi]<a[i]?i:maxi;
        }
        int gc=a[maxi];
        swap(a[maxi],a[0]);
        forn(i,1,n-1){
        	int maxi=i;
        	forn(j,i+1,n)
        		if(gcd(gc,a[j])>gcd(gc,a[maxi]))
        			maxi=j;
        	swap(a[maxi],a[i]);
        	gc=gcd(gc,a[i]);
        }
        forn(i,0,n)
        	cout<<a[i]<<' ';
        cout<<'\n';
    }
    return 0;
}