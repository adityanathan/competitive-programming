#include <bits/stdc++.h> // binary-search, sliding window, two pointer
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
    int n,k;
    string s;
    cin>>n>>k>>s;
    int l=0, r=n, mid,ans=0;
    while(l<=r){
    	mid=(l+r)/2;
    	int i=0, j=0, tot=0;
    	while(j<mid){
    		if(s[j]=='0'&&(j==0||s[j]!=s[j-1]))
    			tot++;
    		j++;
    	}
    	bool b=tot<=k;
    	while(j<n){
    		debug(b,j);
    		if(s[j]=='0'&&(j==0||s[j]!=s[j-1]))
    			tot++;
    		i=j-mid;
    		if(s[i]=='0'&&(i==n-1||s[i]!=s[i+1]))
    			tot--;
    		b=b||tot<=k;
    		j++;
    	}
    	debug(l,r,b);
    	if(b){
    		ans=max(ans,mid);
    		l=mid+1;
    	}
    	else
    		r=mid-1;
    }

    cout<<ans;
    
    return 0;
}