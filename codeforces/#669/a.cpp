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
    int n,t,aa;
    cin>>t;

    while(t--){
        cin>>n;
        bool b=false;
        map<int,int> m;
        forn(i,0,n){
        	cin>>aa;
        	m[aa]++;
        }
        if(m[0]>=n/2){
        	cout<<m[0]<<'\n';
        	forn(i,0,m[0])
        	cout<<"0 ";
        	cout<<'\n';
        }
        else if(m[1]%2){
        	cout<<m[1]-1<<'\n';
        	forn(i,0,m[1]-1)
        	cout<<"1 ";
        	cout<<'\n';
        }
        else{
        	cout<<m[1]<<'\n';
        	forn(i,0,m[1])
        	cout<<"1 ";
        	cout<<'\n';
        }
    }
    return 0;
}