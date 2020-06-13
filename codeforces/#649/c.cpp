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
    bool flag;
    {
        cin>>n;
        flag=true;
        vector<int> a(n),b(n,-1);
        forn(i,0,n){
        	cin>>a[i];
        	if(a[i]>i+1)
        		flag=false;
        }
        if(!flag){
        	cout<<"-1\n"; 
        	return 0;
        }
        set<int> s;
        forn(i,0,n-1){
        	if(a[i+1]!=a[i]){
        		b[i+1]=a[i];
        		s.insert(a[i]);
        	}
        }
        s.insert(a[n-1]);
        int x=0;
        forn(i,0,n){
        	while(s.count(x))
        		x++;
        	if(b[i]==-1)
        		b[i]=x++;
        }
        debug(b);
        forn(i,0,n)
        	cout<<b[i]<<" ";
    }
    return 0;
}