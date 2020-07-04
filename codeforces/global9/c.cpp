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


int n,t,minnow,minto;

vector<int> f(vector<int> &a){
	vector<int> b;
	minnow=a[0],minto=INT_MAX;
    forn(i,1,n){
    	if(a[i]<=a[i-1]){
    		if(!b.size() || a[i-1]<=b.back())
    			b.push_back(minnow),minnow=a[i],minto=INT_MAX;
    		else 
    			if(a[i-1]>b.back())
    				b.push_back(minto);
    	}
    	else if(b.size() && a[i]>b.back())
    		minto=min(minto,a[i]);
    }
    if(!b.size() || a[n-1]<b.back())
    	b.push_back(minnow);
    else 
		if(a[n-1]>b.back())
			b.push_back(minto);
	return b;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n),b;
        forn(i,0,n){
        	cin>>a[i];
        }
        
        while(a!=b){
        	b=a;
        	n=a.size();
        	a=f(a);
        }
        debug(b);
        cout<<(b.size()>1?"NO":"YES")<<'\n';
    }
    return 0;
}