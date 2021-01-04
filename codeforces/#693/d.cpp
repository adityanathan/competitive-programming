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
    int n,a,t;
    cin>>t;

    while(t--){
        cin>>n;
        ll alice=0, bob=0;
        map<int,vector<int>> m;
        forn(i,0,n)
        	cin>>a, m[a%2].push_back(a);
        sort(m[0].begin(),m[0].end());
        sort(m[1].begin(),m[1].end());
        forn(i,0,n){
        	if(m[0].size() && m[1].size() && i%2==0){
        		if(m[0].back()>=m[1].back())
        			alice+=m[0].back(), m[0].pop_back();
        		else
        			m[1].pop_back();
        	}
        	else if(m[0].size() && m[1].size() && i%2){
        		if(m[1].back()>=m[0].back())
        			bob+=m[1].back(), m[1].pop_back();
        		else
        			m[0].pop_back();
        	}
        	else if(m[0].size()){
        		if(i%2==0)
        			alice+=m[0].back();
        		m[0].pop_back();
        	}
        	else if(m[1].size()){
        		if(i%2==1)
        			bob+=m[1].back();
        		m[1].pop_back();
        	}
        }
        cout<<(alice>bob?"Alice":alice==bob?"Tie":"Bob")<<'\n';
    }
    return 0;
}