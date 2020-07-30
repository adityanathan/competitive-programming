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
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        if(n<31){
        	cout<<"NO\n";
        	continue;
        }
    	if(n==36){
        	cout<<"YES"<<'\n';
        	cout<<"5 6 10 15\n";
        	continue;
    	}
    	if(n==40){
        	cout<<"YES"<<'\n';
        	cout<<"3 6 10 21\n";
        	continue;
    	}
    	if(n==44){
        	cout<<"YES"<<'\n';
        	cout<<"6 7 10 21\n";
        	continue;
    	}
        cout<<"YES"<<'\n';
        cout<<"6 10 14 "<<n-30<<'\n';
    }
    return 0;
}