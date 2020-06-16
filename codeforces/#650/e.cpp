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

vector<int> allDivs(int n){
	vector<int> v;
    forn(i,1,sqrt(n)+1)
        if(n%i == 0){ 
            v.push_back(i);
            if(n/i!=i)
            	v.push_back(n/i);
        }
    sort(v.begin(),v.end());
    return v;
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t,k,count,ans;
    string s;
    cin>>t;

    while(t--){
        cin>>n>>k>>s;
        map<char,int> m;
        for(auto c: s)
        	m[c]++;
        vector<int> d = allDivs(k);
        ans=0;
        forn(rep,1,s.size()+1){
        	count=0;
        	forit(it,m)
        		count+=it->second/rep;
        	forn(i,0,d.size())
        		if((i==d.size()-1 || d[i+1]>count) && d[i]<=count)
        			ans=max(ans,d[i]*rep);
        }
        cout<<ans<<'\n';
    }
    return 0;
}