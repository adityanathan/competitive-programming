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
    int n,t,x,a,b,deg;
    cin>>t;

    while(t--){
        cin>>n>>x;
        deg=0;
        forn(i,0,n-1){
        	cin>>a>>b;
        	if(a==x||b==x)
        		deg++;
        }
        if(deg<=1)
        	cout<<"Ayush\n";
        else
        	cout<<(n%2?"Ashish":"Ayush")<<'\n';
    }
    return 0;
}