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
    int n,a,x,her=0;
    {
        cin>>n>>a;
        map<int,int> m;
        forn(i,0,n){
        	cin>>x;
        	if(x==a)
        		her++;
        	else
        		m[x]++;
        	forit(it,m){
        		if(it->second<her){
        			int s=it->first;
        			if(it!=m.begin()){
        				it--;
        			}
        			m.erase(s);
        			if(m.size()==0)
        				break;
        		}
        	}
        	if(m.size()==0)
        		break;
        }

        cout<<(m.size()==0?-1:m.begin()->first)<<'\n';
    }
    return 0;
}