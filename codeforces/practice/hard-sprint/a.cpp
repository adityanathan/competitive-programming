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
    int n,q,type,x,ind;
    cin>>n;
    vector<int> a(n),b(n,-1);
    forn(i,0,n)
    	cin>>a[i];
    cin>>q;
    vector<int> times,amts;
    forn(i,0,q){
    	cin>>type;
    	if(type==1){
    		cin>>ind>>x;
    		b[ind-1]=x;
    	}
    	else{
    		cin>>x;
    		times.push_back(i);
    		amts.push_back(x);
    	}
    }

    forn(i,0,n){
    	if(b[i]==-1)
    		cout<<
    }

    cout<<n<<'\n';

    return 0;
}