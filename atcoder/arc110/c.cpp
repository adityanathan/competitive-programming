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
    int n;

    cin>>n;
    vector<int> a(n),ans;
    vector<bool> b(n,true);
    forn(i,0,n)
    	cin>>a[i];
    forn(i,0,n-1)
    	if(a[i]>i+1 && a[i+1]<i+2 && b[i]){

    		swap(a[i],a[i+1]), b[i]=false;
    		debug(a);
    		ans.push_back(i+1);
    	}
    forn(i,0,n)
    	if(a[i]!=i){
    		cout<<-1;
    		return 0;
    	}
    for(auto x:ans)
    	cout<<x<<'\n';
    
    return 0;
}