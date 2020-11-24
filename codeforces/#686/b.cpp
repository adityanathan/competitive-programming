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
    int n,a,t;
    cin>>t;

    while(t--){
        cin>>n;
        bool b=true;

        map<int,vector<int>> m;
        forn(i,0,n)
        	cin>>a, m[a].push_back(i);
        for(auto x:m)
        	if(x.second.size()==1){
        		cout<<x.second[0]+1<<'\n';
        		b=false;
        		break;
        	}
        if(b)
        	cout<<-1<<'\n';
    }
    return 0;
}