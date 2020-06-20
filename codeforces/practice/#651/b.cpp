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
    int n,t,aa;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> odd,ev;
        forn(i,0,2*n){
        	cin>>aa;
        	if(aa%2)
        		odd.push_back(aa);
        	else
        		ev.push_back(aa);
        }
        if(odd.size()%2)
        	odd.pop_back(),ev.pop_back();
        else if(odd.size()>1)
        		odd.pop_back(),odd.pop_back();
    	else
    		ev.pop_back(),ev.pop_back();
    	forn(i,0,odd.size()/2)
    		cout<<odd[2*i]<<" "<<odd[2*i+1]<<'\n';
    	forn(i,0,ev.size()/2)
    		cout<<ev[2*i]<<" "<<ev[2*i+1]<<'\n';
    }
    return 0;
}