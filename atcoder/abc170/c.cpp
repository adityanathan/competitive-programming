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
    int n,x,aa;

    {
        cin>>x>>n;
        set<int> s;
        forn(i,0,n){
        	cin>>aa;
        	s.insert(aa);
        }
        int i=1;
        if(s.count(x)==0){
        	cout<<x;
        	return 0;
        }
        while(true){
        	if(s.count(x-i)==0){
        		cout<<x-i;
        		return 0;
        	}
        	if(s.count(x+i)==0){
        		cout<<x+i;
        		return 0;
        	}
        	i++;
        }
    }
    return 0;
}