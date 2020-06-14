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
    int n,aa;

    {
        cin>>n;
        vector<int> a,b;
        map<int,int> m;
        forn(i,0,n){
        	cin>>aa;
        	m[aa]++;
        }
        forit(it,m){
        	if(it->second>2){
        		cout<<"NO";
        		return 0;
        	}
        	if(it->second==2){
        		a.push_back(it->first);
        	}
    		b.push_back(it->first);
        }
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        cout<<"YES\n";
        cout<<a.size()<<'\n';
        forn(i,0,a.size())
        	cout<<a[i]<<' ';
        cout<<'\n';
        cout<<b.size()<<'\n';
        forn(i,0,b.size())
        	cout<<b[i]<<' ';
        cout<<'\n';
    }
    return 0;
}