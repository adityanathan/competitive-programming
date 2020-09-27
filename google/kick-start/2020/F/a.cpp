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
    int n,t,test,x,ai;
    pair<int,int> pi;
    cin>>test;
	t=test;

    while(t--){
        cin>>n>>x;
        cout<<"Case #"<<test-t<<": ";
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        forn(i,0,n)
        	cin>>ai, pq.push({(ai-1)/x,i});
        while(pq.size())
        	pi=pq.top(), pq.pop(),cout<<pi.second+1<<' ';

        cout<<'\n';
    }
    return 0;
}