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
    int n,t,x,aa;
    cin>>t;

    while(t--){
        cin>>n;
        x=-1;
        forn(i,0,n){
        	cin>>aa;
        	if(aa!=1 && x==-1)
        		x=i;
        }
        if(x==-1)
        	cout<<(n%2?"First":"Second")<<'\n';       
        else
        	cout<<(x%2==0?"First":"Second")<<'\n';
    }
    return 0;
}