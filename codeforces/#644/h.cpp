#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(x...) 141
#endif

#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(decltype(m)::iterator it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

int m;
string f(ll n){
	string s="";
	int i=0;
	while(i<m){
		s+=n%2+'0';
		i++;
		n/=2;
	}
	reverse(s.begin(),s.end());
	return s;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    ll rank,diff;
    cin>>t;

    while(t--){
        cin>>n>>m;
        string s;
        ll med = pow(2,m-1)-1;
        rank=1;
        map<string,bool> m;
        forn(i,0,n){
        	cin>>s;
        	m[s]=1;
        	if(s<f(med))
        		rank++;
        	else if(s>f(med)) rank--;
        }
        if(n&1)
        	diff=rank-1;
        else
        	diff=rank;
        if(diff==0){
        	while(m.find(f(med))!=m.end())
        		med--;
        	cout<<f(med)<<'\n';
        	continue;
        }
        if(diff>0){
        	while(diff--){
        		if(m.find(f(med))!=m.end())
        			diff++;
        		med--;
        		debug(diff,med,f(med));
        		
        	}
        }
        else if(diff<0){
        	while(diff++){
        		if(m.find(f(med))!=m.end())
        			diff--;
        		med++;
        		debug(diff,med,f(med));
        		
        	}
        }
        cout<<f(med)<<'\n';
    }
    return 0;
}





