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
    int n,t,test;
    string s;
    cin>>test;
	t=test;

    while(t--){
        cin>>s;
        n=s.length();
        vector<int> kick,start;
        ll ans=0;
        forn(i,0,n)
        	if(s.substr(i,4)=="KICK")
        		kick.push_back(i);
        	else if(s.substr(i,5)=="START")
        		start.push_back(i);
        for(auto x:kick)
        	ans+=start.end()-upper_bound(start.begin(),start.end(),x);
        cout<<"Case #"<<test-t<<": "<< ans <<'\n';
    }
    return 0;
}