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
        forn(i,0,(n-1)/4)
        	cout<<"999";
        if(n%4==1)
        	cout<<"8";
        if(n%4==2)
        	cout<<"98";
        if(n%4==3)
        	cout<<"998";
        if(n%4==0)
        	cout<<"9998";
        forn(i,0,(n-1)/4)
        	cout<<"8";
        cout<<'\n';
    }
    return 0;
}