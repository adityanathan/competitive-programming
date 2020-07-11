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
    int n,t;
    pair<int,int> elem;
    cin>>t;

    while(t--){
        cin>>n;
        priority_queue<pair<int,int>, vector<int>, greater<int>> pq;
        vector<int> a(n);
        forn(i,0,n)
        	cin>a[i],pq.push({a[i],i});
        while(pq.size()>1){
        	elem=pq.top(), pq.pop();
        	pq.push({a[elem.second+1]})
        }
        cout<<n<<'\n';
    }
    return 0;
}