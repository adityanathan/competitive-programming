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
    int n,k,t,cnt,ans,v2,v3;
    string s;
    cin>>t;

    while(t--){
        cin>>n>>k>>s;
        vector<int> v;
        int i=0;
        v2=v3=ans=0;
        forn(i,0,n)
        	ans+=(s[i]=='W')+(i&&s[i]=='W'&&s[i-1]=='W');
        while(i<n&&s[i]=='L')
        	v2++, i++;
        while(i<n){
        	cnt=0;
        	while(i<n&&s[i]=='L')
        		cnt++, i++;
        	if(cnt){
        		if(i==n)
        			v3=cnt;
        		else
        			v.push_back(cnt);
        	}
        	i++;
        }
        // debug(ans,v);
        sort(v.begin(),v.end());
        for(auto x:v)
        	if(x<=k)
        		ans+=2*x+1, k-=x;
        	else{
        		ans+=2*k, k=0;
        		break;
        	}

       	if(k>0 && v3)
        	ans+=2*min(k,v3), k-=v3;
        if(k>0 && v2)
        	ans+=2*min(k,v2)-(v2==n), k-=v2;

        cout<<ans<<'\n';
        	
    }
    return 0;
}